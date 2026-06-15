import Sofa
import SofaRuntime
import json

SofaRuntime.importPlugin("Sofa.Component")

components_data = {}


known_templates = {
    "Vec1d": "Vec1Types_",
    "Vec1f": "Vec1Types_",
    "Vec2d": "Vec2Types_",
    "Vec2f": "Vec2Types_",
    "Vec3d": "Vec3Types_",
    "Vec3f": "Vec3Types_",
    "Vec6d": "Vec6Types_",
    "Vec6f": "Vec6Types_",
    "Rigid3d": "Rigid3Types_",
    "Rigid3f": "Rigid3Types_",
    "Rigid2d": "Rigid2Types_",
    "Rigid2f": "Rigid2Types_",
}

for c in Sofa.Core.ObjectFactory.components:
    if len(c.templates) > 0:
        all_templates = [t.split(',') for t in c.templates]
        filtered_templates = [
            [known_templates[item] for item in t]
            for t in all_templates 
            if all(item in known_templates for item in t)
        ]
        if len(filtered_templates) > 0:
            targets = list(c.targets)
            if len(targets) > 0:
                description = c.description
                if description[-1] == '\n':
                    description = description[:-1]
                locations = [l[l.find("sofa/component"):].replace('.h', '.inl') for l in c.locations]
                components_data[c.className] = {
                    "templates": filtered_templates,
                    "description": description,
                    "includes": locations,
                    "namespace": targets[0].lower().replace('.', '::')
                }

with open("components.json", "w") as f:
    json.dump(components_data, f, indent=2)
