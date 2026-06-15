#include <Sofa.Component.longdouble/config.h>
#include <sofa/core/ObjectFactory.h>
#include <sofa/defaulttype/VecTypes.h>

#if __has_include(<sofa/component/constraint/projective/AffineMovementProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/AffineMovementProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/AngularSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/AngularSpringForceField.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/AreaMapping.inl>)
#include <sofa/component/mapping/nonlinear/AreaMapping.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/AttachProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/AttachProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/model/AugmentedLagrangianConstraint.inl>)
#include <sofa/component/constraint/lagrangian/model/AugmentedLagrangianConstraint.inl>
#endif
#if __has_include(<sofa/component/engine/analyze/AverageCoord.inl>)
#include <sofa/component/engine/analyze/AverageCoord.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/BarycentricMapping.inl>)
#include <sofa/component/mapping/linear/BarycentricMapping.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/BeamFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/BeamFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/BeamLinearMapping.inl>)
#include <sofa/component/mapping/linear/BeamLinearMapping.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/model/BilateralLagrangianConstraint.inl>)
#include <sofa/component/constraint/lagrangian/model/BilateralLagrangianConstraint.inl>
#endif
#if __has_include(<sofa/component/io/mesh/BlenderExporter.inl>)
#include <sofa/component/io/mesh/BlenderExporter.inl>
#endif
#if __has_include(<sofa/component/engine/select/BoxROI.inl>)
#include <sofa/component/engine/select/BoxROI.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/CenterOfMassMapping.inl>)
#include <sofa/component/mapping/linear/CenterOfMassMapping.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/CenterOfMassMulti2Mapping.inl>)
#include <sofa/component/mapping/linear/CenterOfMassMulti2Mapping.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/CenterOfMassMultiMapping.inl>)
#include <sofa/component/mapping/linear/CenterOfMassMultiMapping.inl>
#endif
#if __has_include(<sofa/component/engine/analyze/ClusteringEngine.inl>)
#include <sofa/component/engine/analyze/ClusteringEngine.inl>
#endif
#if __has_include(<sofa/component/engine/select/ComplementaryROI.inl>)
#include <sofa/component/engine/select/ComplementaryROI.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/ConicalForceField.inl>)
#include <sofa/component/mechanicalload/ConicalForceField.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/ConstantForceField.inl>)
#include <sofa/component/mechanicalload/ConstantForceField.inl>
#endif
#if __has_include(<sofa/component/collision/geometry/CylinderCollisionModel.inl>)
#include <sofa/component/collision/geometry/CylinderCollisionModel.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/DeformableOnRigidFrameMapping.inl>)
#include <sofa/component/mapping/linear/DeformableOnRigidFrameMapping.inl>
#endif
#if __has_include(<sofa/component/mass/DiagonalMass.inl>)
#include <sofa/component/mass/DiagonalMass.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/DiagonalVelocityDampingForceField.inl>)
#include <sofa/component/mechanicalload/DiagonalVelocityDampingForceField.inl>
#endif
#if __has_include(<sofa/component/engine/transform/DilateEngine.inl>)
#include <sofa/component/engine/transform/DilateEngine.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/DirectionProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/DirectionProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/engine/transform/DisplacementMatrixEngine.inl>)
#include <sofa/component/engine/transform/DisplacementMatrixEngine.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/DistanceFromTargetMapping.inl>)
#include <sofa/component/mapping/nonlinear/DistanceFromTargetMapping.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/DistanceMapping.inl>)
#include <sofa/component/mapping/nonlinear/DistanceMapping.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/DistanceMultiMapping.inl>)
#include <sofa/component/mapping/nonlinear/DistanceMultiMapping.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/DistanceToPlaneMapping.inl>)
#include <sofa/component/mapping/linear/DistanceToPlaneMapping.inl>
#endif
#if __has_include(<sofa/component/engine/analyze/Distances.inl>)
#include <sofa/component/engine/analyze/Distances.inl>
#endif
#if __has_include(<sofa/component/topology/container/dynamic/DynamicSparseGridGeometryAlgorithms.inl>)
#include <sofa/component/topology/container/dynamic/DynamicSparseGridGeometryAlgorithms.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mass/ElementFEMMass.inl>)
#include <sofa/component/mass/ElementFEMMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/EdgePressureForceField.inl>)
#include <sofa/component/mechanicalload/EdgePressureForceField.inl>
#endif
#if __has_include(<sofa/component/topology/container/dynamic/EdgeSetGeometryAlgorithms.inl>)
#include <sofa/component/topology/container/dynamic/EdgeSetGeometryAlgorithms.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/EllipsoidForceField.inl>)
#include <sofa/component/mechanicalload/EllipsoidForceField.inl>
#endif
#if __has_include(<sofa/component/engine/generate/ExtrudeEdgesAndGenerateQuads.inl>)
#include <sofa/component/engine/generate/ExtrudeEdgesAndGenerateQuads.inl>
#endif
#if __has_include(<sofa/component/engine/generate/ExtrudeQuadsAndGenerateHexas.inl>)
#include <sofa/component/engine/generate/ExtrudeQuadsAndGenerateHexas.inl>
#endif
#if __has_include(<sofa/component/engine/generate/ExtrudeSurface.inl>)
#include <sofa/component/engine/generate/ExtrudeSurface.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/FastTetrahedralCorotationalForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/FastTetrahedralCorotationalForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/FastTriangularBendingSprings.inl>)
#include <sofa/component/solidmechanics/spring/FastTriangularBendingSprings.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/model/FixedLagrangianConstraint.inl>)
#include <sofa/component/constraint/lagrangian/model/FixedLagrangianConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/FixedPlaneProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/FixedPlaneProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/FixedProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/FixedProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/FixedRotationProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/FixedRotationProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/FixedTranslationProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/FixedTranslationProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/FrameSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/FrameSpringForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/GearSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/GearSpringForceField.inl>
#endif
#if __has_include(<sofa/component/engine/generate/GenerateCylinder.inl>)
#include <sofa/component/engine/generate/GenerateCylinder.inl>
#endif
#if __has_include(<sofa/component/engine/generate/GenerateGrid.inl>)
#include <sofa/component/engine/generate/GenerateGrid.inl>
#endif
#if __has_include(<sofa/component/engine/generate/GenerateRigidMass.inl>)
#include <sofa/component/engine/generate/GenerateRigidMass.inl>
#endif
#if __has_include(<sofa/component/engine/generate/GenerateSphere.inl>)
#include <sofa/component/engine/generate/GenerateSphere.inl>
#endif
#if __has_include(<sofa/component/engine/generate/GroupFilterYoungModulus.inl>)
#include <sofa/component/engine/generate/GroupFilterYoungModulus.inl>
#endif
#if __has_include(<sofa/component/engine/analyze/HausdorffDistance.inl>)
#include <sofa/component/engine/analyze/HausdorffDistance.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/HermiteSplineProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/HermiteSplineProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/HexahedralFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/HexahedralFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/HexahedralFEMForceFieldAndMass.inl>)
#include <sofa/component/solidmechanics/fem/elastic/HexahedralFEMForceFieldAndMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/nonuniform/HexahedronCompositeFEMForceFieldAndMass.inl>)
#include <sofa/component/solidmechanics/fem/nonuniform/HexahedronCompositeFEMForceFieldAndMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/HexahedronFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/HexahedronFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/HexahedronFEMForceFieldAndMass.inl>)
#include <sofa/component/solidmechanics/fem/elastic/HexahedronFEMForceFieldAndMass.inl>
#endif
#if __has_include(<sofa/component/mass/ElementFEMMass.inl>)
#include <sofa/component/mass/ElementFEMMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>
#endif
#if __has_include(<sofa/component/topology/container/dynamic/HexahedronSetGeometryAlgorithms.inl>)
#include <sofa/component/topology/container/dynamic/HexahedronSetGeometryAlgorithms.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/IdentityMapping.inl>)
#include <sofa/component/mapping/linear/IdentityMapping.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/IdentityMultiMapping.inl>)
#include <sofa/component/mapping/linear/IdentityMultiMapping.inl>
#endif
#if __has_include(<sofa/component/engine/transform/IndexValueMapper.inl>)
#include <sofa/component/engine/transform/IndexValueMapper.inl>
#endif
#if __has_include(<sofa/component/engine/transform/Indices2ValuesMapper.inl>)
#include <sofa/component/engine/transform/Indices2ValuesMapper.inl>
#endif
#if __has_include(<sofa/component/engine/select/IndicesFromValues.inl>)
#include <sofa/component/engine/select/IndicesFromValues.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/InteractionEllipsoidForceField.inl>)
#include <sofa/component/mechanicalload/InteractionEllipsoidForceField.inl>
#endif
#if __has_include(<sofa/component/engine/generate/JoinPoints.inl>)
#include <sofa/component/engine/generate/JoinPoints.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/JointSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/JointSpringForceField.inl>
#endif
#if __has_include(<sofa/component/haptics/LCPForceFeedback.inl>)
#include <sofa/component/haptics/LCPForceFeedback.inl>
#endif
#if __has_include(<sofa/component/collision/geometry/LineCollisionModel.inl>)
#include <sofa/component/collision/geometry/LineCollisionModel.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/LineProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/LineProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/LineSetSkinningMapping.inl>)
#include <sofa/component/mapping/linear/LineSetSkinningMapping.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/LinearForceField.inl>)
#include <sofa/component/mechanicalload/LinearForceField.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/LinearMovementProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/LinearMovementProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/correction/LinearSolverConstraintCorrection.inl>)
#include <sofa/component/constraint/lagrangian/correction/LinearSolverConstraintCorrection.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/LinearVelocityProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/LinearVelocityProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/statecontainer/MappedObject.inl>)
#include <sofa/component/statecontainer/MappedObject.inl>
#endif
#if __has_include(<sofa/component/statecontainer/MechanicalObject.inl>)
#include <sofa/component/statecontainer/MechanicalObject.inl>
#endif
#if __has_include(<sofa/component/controller/MechanicalStateController.inl>)
#include <sofa/component/controller/MechanicalStateController.inl>
#endif
#if __has_include(<sofa/component/engine/generate/MergeMeshes.inl>)
#include <sofa/component/engine/generate/MergeMeshes.inl>
#endif
#if __has_include(<sofa/component/engine/generate/MergePoints.inl>)
#include <sofa/component/engine/generate/MergePoints.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/Mesh2PointMechanicalMapping.inl>)
#include <sofa/component/mapping/linear/Mesh2PointMechanicalMapping.inl>
#endif
#if __has_include(<sofa/component/engine/generate/MeshBarycentricMapperEngine.inl>)
#include <sofa/component/engine/generate/MeshBarycentricMapperEngine.inl>
#endif
#if __has_include(<sofa/component/engine/generate/MeshClosingEngine.inl>)
#include <sofa/component/engine/generate/MeshClosingEngine.inl>
#endif
#if __has_include(<sofa/component/mass/MeshMatrixMass.inl>)
#include <sofa/component/mass/MeshMatrixMass.inl>
#endif
#if __has_include(<sofa/component/engine/select/MeshROI.inl>)
#include <sofa/component/engine/select/MeshROI.inl>
#endif
#if __has_include(<sofa/component/engine/select/MeshSampler.inl>)
#include <sofa/component/engine/select/MeshSampler.inl>
#endif
#if __has_include(<sofa/component/engine/select/MeshSplittingEngine.inl>)
#include <sofa/component/engine/select/MeshSplittingEngine.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/MeshSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/MeshSpringForceField.inl>
#endif
#if __has_include(<sofa/component/engine/select/MeshSubsetEngine.inl>)
#include <sofa/component/engine/select/MeshSubsetEngine.inl>
#endif
#if __has_include(<sofa/component/engine/select/NearestPointROI.inl>)
#include <sofa/component/engine/select/NearestPointROI.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/nonuniform/NonUniformHexahedralFEMForceFieldAndMass.inl>)
#include <sofa/component/solidmechanics/fem/nonuniform/NonUniformHexahedralFEMForceFieldAndMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/nonuniform/NonUniformHexahedronFEMForceFieldAndMass.inl>)
#include <sofa/component/solidmechanics/fem/nonuniform/NonUniformHexahedronFEMForceFieldAndMass.inl>
#endif
#if __has_include(<sofa/component/engine/generate/NormEngine.inl>)
#include <sofa/component/engine/generate/NormEngine.inl>
#endif
#if __has_include(<sofa/component/engine/generate/NormalsFromPoints.inl>)
#include <sofa/component/engine/generate/NormalsFromPoints.inl>
#endif
#if __has_include(<sofa/component/haptics/NullForceFeedbackT.inl>)
#include <sofa/component/haptics/NullForceFeedbackT.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/OscillatingTorsionPressureForceField.inl>)
#include <sofa/component/mechanicalload/OscillatingTorsionPressureForceField.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/OscillatorProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/OscillatorProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/engine/select/PairBoxRoi.inl>)
#include <sofa/component/engine/select/PairBoxRoi.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/ParabolicProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/ParabolicProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/PartialFixedProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/PartialFixedProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/PartialLinearMovementProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/PartialLinearMovementProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/PatchTestMovementProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/PatchTestMovementProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/collision/response/contact/PenalityContactForceField.inl>)
#include <sofa/component/collision/response/contact/PenalityContactForceField.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/PlaneForceField.inl>)
#include <sofa/component/mechanicalload/PlaneForceField.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/PlaneProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/PlaneProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/engine/select/PlaneROI.inl>)
#include <sofa/component/engine/select/PlaneROI.inl>
#endif
#if __has_include(<sofa/component/collision/geometry/PointCollisionModel.inl>)
#include <sofa/component/collision/geometry/PointCollisionModel.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/PointProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/PointProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/topology/container/dynamic/PointSetGeometryAlgorithms.inl>)
#include <sofa/component/topology/container/dynamic/PointSetGeometryAlgorithms.inl>
#endif
#if __has_include(<sofa/component/engine/select/PointsFromIndices.inl>)
#include <sofa/component/engine/select/PointsFromIndices.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/PolynomialRestShapeSpringsForceField.inl>)
#include <sofa/component/solidmechanics/spring/PolynomialRestShapeSpringsForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/PolynomialSpringsForceField.inl>)
#include <sofa/component/solidmechanics/spring/PolynomialSpringsForceField.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/PositionBasedDynamicsProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/PositionBasedDynamicsProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/correction/PrecomputedConstraintCorrection.inl>)
#include <sofa/component/constraint/lagrangian/correction/PrecomputedConstraintCorrection.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mass/ElementFEMMass.inl>)
#include <sofa/component/mass/ElementFEMMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>
#endif
#if __has_include(<sofa/component/engine/transform/ProjectiveTransformEngine.inl>)
#include <sofa/component/engine/transform/ProjectiveTransformEngine.inl>
#endif
#if __has_include(<sofa/component/engine/select/ProximityROI.inl>)
#include <sofa/component/engine/select/ProximityROI.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/QuadBendingFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/QuadBendingFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/QuadBendingSprings.inl>)
#include <sofa/component/solidmechanics/spring/QuadBendingSprings.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mass/ElementFEMMass.inl>)
#include <sofa/component/mass/ElementFEMMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/QuadPressureForceField.inl>)
#include <sofa/component/mechanicalload/QuadPressureForceField.inl>
#endif
#if __has_include(<sofa/component/topology/container/dynamic/QuadSetGeometryAlgorithms.inl>)
#include <sofa/component/topology/container/dynamic/QuadSetGeometryAlgorithms.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/QuadularBendingSprings.inl>)
#include <sofa/component/solidmechanics/spring/QuadularBendingSprings.inl>
#endif
#if __has_include(<sofa/component/engine/transform/QuatToRigidEngine.inl>)
#include <sofa/component/engine/transform/QuatToRigidEngine.inl>
#endif
#if __has_include(<sofa/component/engine/generate/RandomPointDistributionInSurface.inl>)
#include <sofa/component/engine/generate/RandomPointDistributionInSurface.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/RegularGridSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/RegularGridSpringForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/RepulsiveSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/RepulsiveSpringForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/RestShapeSpringsForceField.inl>)
#include <sofa/component/solidmechanics/spring/RestShapeSpringsForceField.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/RigidMapping.inl>)
#include <sofa/component/mapping/nonlinear/RigidMapping.inl>
#endif
#if __has_include(<sofa/component/engine/transform/RigidToQuatEngine.inl>)
#include <sofa/component/engine/transform/RigidToQuatEngine.inl>
#endif
#if __has_include(<sofa/component/engine/analyze/ShapeMatching.inl>)
#include <sofa/component/engine/analyze/ShapeMatching.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/SimpleTesselatedTetraMechanicalMapping.inl>)
#include <sofa/component/mapping/linear/SimpleTesselatedTetraMechanicalMapping.inl>
#endif
#if __has_include(<sofa/component/constraint/projective/SkeletalMotionProjectiveConstraint.inl>)
#include <sofa/component/constraint/projective/SkeletalMotionProjectiveConstraint.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/SkinningMapping.inl>)
#include <sofa/component/mapping/linear/SkinningMapping.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/model/SlidingLagrangianConstraint.inl>)
#include <sofa/component/constraint/lagrangian/model/SlidingLagrangianConstraint.inl>
#endif
#if __has_include(<sofa/component/engine/transform/SmoothMeshEngine.inl>)
#include <sofa/component/engine/transform/SmoothMeshEngine.inl>
#endif
#if __has_include(<sofa/component/collision/geometry/SphereCollisionModel.inl>)
#include <sofa/component/collision/geometry/SphereCollisionModel.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/SphereForceField.inl>)
#include <sofa/component/mechanicalload/SphereForceField.inl>
#endif
#if __has_include(<sofa/component/engine/select/SphereROI.inl>)
#include <sofa/component/engine/select/SphereROI.inl>
#endif
#if __has_include(<sofa/component/engine/generate/Spiral.inl>)
#include <sofa/component/engine/generate/Spiral.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/SpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/SpringForceField.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/SquareDistanceMapping.inl>)
#include <sofa/component/mapping/nonlinear/SquareDistanceMapping.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/SquareMapping.inl>)
#include <sofa/component/mapping/nonlinear/SquareMapping.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/hyperelastic/StandardTetrahedralFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/hyperelastic/StandardTetrahedralFEMForceField.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/model/StopperLagrangianConstraint.inl>)
#include <sofa/component/constraint/lagrangian/model/StopperLagrangianConstraint.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/SubsetMapping.inl>)
#include <sofa/component/mapping/linear/SubsetMapping.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/SubsetMultiMapping.inl>)
#include <sofa/component/mapping/linear/SubsetMultiMapping.inl>
#endif
#if __has_include(<sofa/component/engine/select/SubsetTopology.inl>)
#include <sofa/component/engine/select/SubsetTopology.inl>
#endif
#if __has_include(<sofa/component/engine/analyze/SumEngine.inl>)
#include <sofa/component/engine/analyze/SumEngine.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/SurfacePressureForceField.inl>)
#include <sofa/component/mechanicalload/SurfacePressureForceField.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/TaitSurfacePressureForceField.inl>)
#include <sofa/component/mechanicalload/TaitSurfacePressureForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/TetrahedralCorotationalFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/TetrahedralCorotationalFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/tensormass/TetrahedralTensorMassForceField.inl>)
#include <sofa/component/solidmechanics/tensormass/TetrahedralTensorMassForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>
#endif
#if __has_include(<sofa/component/diffusion/TetrahedronDiffusionFEMForceField.inl>)
#include <sofa/component/diffusion/TetrahedronDiffusionFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/TetrahedronFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/TetrahedronFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mass/ElementFEMMass.inl>)
#include <sofa/component/mass/ElementFEMMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/hyperelastic/TetrahedronHyperelasticityFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/hyperelastic/TetrahedronHyperelasticityFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>
#endif
#if __has_include(<sofa/component/topology/container/dynamic/TetrahedronSetGeometryAlgorithms.inl>)
#include <sofa/component/topology/container/dynamic/TetrahedronSetGeometryAlgorithms.inl>
#endif
#if __has_include(<sofa/component/topology/utility/TopologyBoundingTrasher.inl>)
#include <sofa/component/topology/utility/TopologyBoundingTrasher.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/TorsionForceField.inl>)
#include <sofa/component/mechanicalload/TorsionForceField.inl>
#endif
#if __has_include(<sofa/component/visual/TrailRenderer.inl>)
#include <sofa/component/visual/TrailRenderer.inl>
#endif
#if __has_include(<sofa/component/engine/transform/TransformEngine.inl>)
#include <sofa/component/engine/transform/TransformEngine.inl>
#endif
#if __has_include(<sofa/component/engine/transform/TransformPosition.inl>)
#include <sofa/component/engine/transform/TransformPosition.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/TriangleBendingSprings.inl>)
#include <sofa/component/solidmechanics/spring/TriangleBendingSprings.inl>
#endif
#if __has_include(<sofa/component/collision/geometry/TriangleCollisionModel.inl>)
#include <sofa/component/collision/geometry/TriangleCollisionModel.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementCorotationalFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/TriangleFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/TriangleFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mass/ElementFEMMass.inl>)
#include <sofa/component/mass/ElementFEMMass.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/TrianglePressureForceField.inl>)
#include <sofa/component/mechanicalload/TrianglePressureForceField.inl>
#endif
#if __has_include(<sofa/component/topology/container/dynamic/TriangleSetGeometryAlgorithms.inl>)
#include <sofa/component/topology/container/dynamic/TriangleSetGeometryAlgorithms.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/TriangularAnisotropicFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/TriangularAnisotropicFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/TriangularBendingSprings.inl>)
#include <sofa/component/solidmechanics/spring/TriangularBendingSprings.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/TriangularBiquadraticSpringsForceField.inl>)
#include <sofa/component/solidmechanics/spring/TriangularBiquadraticSpringsForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/TriangularFEMForceField.inl>)
#include <sofa/component/solidmechanics/fem/elastic/TriangularFEMForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/fem/elastic/TriangularFEMForceFieldOptim.inl>)
#include <sofa/component/solidmechanics/fem/elastic/TriangularFEMForceFieldOptim.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/TriangularQuadraticSpringsForceField.inl>)
#include <sofa/component/solidmechanics/spring/TriangularQuadraticSpringsForceField.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/tensormass/TriangularTensorMassForceField.inl>)
#include <sofa/component/solidmechanics/tensormass/TriangularTensorMassForceField.inl>
#endif
#if __has_include(<sofa/component/mapping/linear/TubularMapping.inl>)
#include <sofa/component/mapping/linear/TubularMapping.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/correction/UncoupledConstraintCorrection.inl>)
#include <sofa/component/constraint/lagrangian/correction/UncoupledConstraintCorrection.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/model/UniformLagrangianConstraint.inl>)
#include <sofa/component/constraint/lagrangian/model/UniformLagrangianConstraint.inl>
#endif
#if __has_include(<sofa/component/mass/UniformMass.inl>)
#include <sofa/component/mass/UniformMass.inl>
#endif
#if __has_include(<sofa/component/mechanicalload/UniformVelocityDampingForceField.inl>)
#include <sofa/component/mechanicalload/UniformVelocityDampingForceField.inl>
#endif
#if __has_include(<sofa/component/constraint/lagrangian/model/UnilateralLagrangianConstraint.inl>)
#include <sofa/component/constraint/lagrangian/model/UnilateralLagrangianConstraint.inl>
#endif
#if __has_include(<sofa/component/engine/select/ValuesFromIndices.inl>)
#include <sofa/component/engine/select/ValuesFromIndices.inl>
#endif
#if __has_include(<sofa/component/engine/select/ValuesFromPositions.inl>)
#include <sofa/component/engine/select/ValuesFromPositions.inl>
#endif
#if __has_include(<sofa/component/solidmechanics/spring/VectorSpringForceField.inl>)
#include <sofa/component/solidmechanics/spring/VectorSpringForceField.inl>
#endif
#if __has_include(<sofa/component/engine/transform/Vertex2Frame.inl>)
#include <sofa/component/engine/transform/Vertex2Frame.inl>
#endif
#if __has_include(<sofa/component/visual/VisualModelImpl.inl>)
#include <sofa/component/visual/VisualModelImpl.inl>
#endif
#if __has_include(<sofa/component/visual/VisualPointCloud.inl>)
#include <sofa/component/visual/VisualPointCloud.inl>
#endif
#if __has_include(<sofa/component/visual/VisualVectorField.inl>)
#include <sofa/component/visual/VisualVectorField.inl>
#endif
#if __has_include(<sofa/component/engine/generate/VolumeFromTetrahedrons.inl>)
#include <sofa/component/engine/generate/VolumeFromTetrahedrons.inl>
#endif
#if __has_include(<sofa/component/engine/generate/VolumeFromTriangles.inl>)
#include <sofa/component/engine/generate/VolumeFromTriangles.inl>
#endif
#if __has_include(<sofa/component/mapping/nonlinear/VolumeMapping.inl>)
#include <sofa/component/mapping/nonlinear/VolumeMapping.inl>
#endif

// Additional includes
#include <sofa/component/solidmechanics/fem/elastic/ElementLinearSmallStrainFEMForceField.inl>
#include <sofa/component/solidmechanics/fem/elastic/FastTetrahedralCorotationalForceField.inl>




#if __has_include(<stdfloat>)
    #include <stdfloat>
#endif

namespace sofacomponentlongdouble
{
using Real = long double;

using Vec1_ = sofa::type::Vec<2, Real>;
using Vec1Types_ = sofa::defaulttype::StdVectorTypes<Vec1_, Vec1_, Real>;

using Vec2_ = sofa::type::Vec<2, Real>;
using Vec2Types_ = sofa::defaulttype::StdVectorTypes<Vec2_, Vec2_, Real>;

using Vec3_ = sofa::type::Vec<3, Real>;
using Vec3Types_ = sofa::defaulttype::StdVectorTypes<Vec3_, Vec3_, Real>;

using Vec6_ = sofa::type::Vec<6, Real>;
using Vec6Types_ = sofa::defaulttype::StdVectorTypes<Vec6_, Vec6_, Real>;

using Rigid3Types_ = sofa::defaulttype::StdRigidTypes<3, Real>;
using Rigid2Types_ = sofa::defaulttype::StdRigidTypes<2, Real>;

using CRS_Scalar = sofa::linearalgebra::CompressedRowSparseMatrix<Real>;
using CRS_Block3x3 = sofa::linearalgebra::CompressedRowSparseMatrix<sofa::type::Mat<3,3,Real>>;
using FullVector = sofa::linearalgebra::FullVector<Real>;


// Explicit template instantiation for AffineMovementProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::AffineMovementProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::AffineMovementProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for AngularSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::AngularSpringForceField<Rigid3Types_>;

// Explicit template instantiation for AreaMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::AreaMapping<Vec3Types_, Vec1Types_>;

// Explicit template instantiation for AttachProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::AttachProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::AttachProjectiveConstraint<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::AttachProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::AttachProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::AttachProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for AugmentedLagrangianConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::AugmentedLagrangianConstraint<Vec3Types_>;

// Explicit template instantiation for AverageCoord
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::AverageCoord<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::AverageCoord<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::AverageCoord<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::AverageCoord<Rigid3Types_>;

// Explicit template instantiation for BarycentricMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::BarycentricMapping<Vec3Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::BarycentricMapping<Vec3Types_, Vec3Types_>;

// Explicit template instantiation for BeamFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::BeamFEMForceField<Rigid3Types_>;

// Explicit template instantiation for BeamLinearMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::BeamLinearMapping<Rigid3Types_, Vec3Types_>;

// Explicit template instantiation for BilateralLagrangianConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::BilateralLagrangianConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::BilateralLagrangianConstraint<Rigid3Types_>;

// Explicit template instantiation for BlenderExporter
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::io::mesh::BlenderExporter<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::io::mesh::BlenderExporter<Rigid3Types_>;

// Explicit template instantiation for BoxROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::BoxROI<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::BoxROI<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::BoxROI<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::BoxROI<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::BoxROI<Rigid3Types_>;

// Explicit template instantiation for CenterOfMassMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::CenterOfMassMapping<Rigid2Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::CenterOfMassMapping<Rigid3Types_, Vec3Types_>;

// Explicit template instantiation for CenterOfMassMulti2Mapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::CenterOfMassMulti2Mapping<Vec3Types_, Rigid3Types_, Vec3Types_>;

// Explicit template instantiation for CenterOfMassMultiMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::CenterOfMassMultiMapping<Rigid3Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::CenterOfMassMultiMapping<Rigid3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::CenterOfMassMultiMapping<Vec3Types_, Vec3Types_>;

// Explicit template instantiation for ClusteringEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::ClusteringEngine<Vec3Types_>;

// Explicit template instantiation for ComplementaryROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::ComplementaryROI<Vec3Types_>;

// Explicit template instantiation for ConicalForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::ConicalForceField<Vec3Types_>;

// Explicit template instantiation for ConstantForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::ConstantForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::ConstantForceField<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::ConstantForceField<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::ConstantForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::ConstantForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::ConstantForceField<Rigid3Types_>;

// Explicit template instantiation for CylinderCollisionModel
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::collision::geometry::CylinderCollisionModel<Rigid3Types_>;

// Explicit template instantiation for DeformableOnRigidFrameMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::DeformableOnRigidFrameMapping<Vec3Types_, Rigid3Types_, Vec3Types_>;

// Explicit template instantiation for DiagonalMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Vec1Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Rigid2Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Vec2Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Rigid3Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Vec3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Vec1Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Rigid2Types_, Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Vec2Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::DiagonalMass<Vec1Types_, Vec1Types_>;

// Explicit template instantiation for DiagonalVelocityDampingForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Rigid3Types_>;

// Explicit template instantiation for DilateEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::DilateEngine<Vec3Types_>;

// Explicit template instantiation for DirectionProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::DirectionProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::DirectionProjectiveConstraint<Vec3Types_>;

// Explicit template instantiation for DisplacementMatrixEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::DisplacementMatrixEngine<Rigid3Types_>;

// Explicit template instantiation for DistanceFromTargetMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::DistanceFromTargetMapping<Vec1Types_, Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::DistanceFromTargetMapping<Vec3Types_, Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::DistanceFromTargetMapping<Rigid3Types_, Vec1Types_>;

// Explicit template instantiation for DistanceMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::DistanceMapping<Vec3Types_, Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::DistanceMapping<Rigid3Types_, Vec1Types_>;

// Explicit template instantiation for DistanceMultiMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::DistanceMultiMapping<Vec3Types_, Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::DistanceMultiMapping<Rigid3Types_, Vec1Types_>;

// Explicit template instantiation for DistanceToPlaneMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::DistanceToPlaneMapping<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::DistanceToPlaneMapping<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::DistanceToPlaneMapping<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::DistanceToPlaneMapping<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::DistanceToPlaneMapping<Rigid3Types_>;

// Explicit template instantiation for Distances
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::Distances<Vec3Types_>;

// Explicit template instantiation for DynamicSparseGridGeometryAlgorithms
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::DynamicSparseGridGeometryAlgorithms<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::DynamicSparseGridGeometryAlgorithms<Vec3Types_>;

// Explicit template instantiation for EdgeCorotationalFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::EdgeCorotationalFEMForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::EdgeCorotationalFEMForceField<Vec3Types_>;

// Explicit template instantiation for EdgeFEMMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::EdgeFEMMass<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::EdgeFEMMass<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::EdgeFEMMass<Vec1Types_>;

// Explicit template instantiation for EdgeLinearSmallStrainFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::EdgeLinearSmallStrainFEMForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::EdgeLinearSmallStrainFEMForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::EdgeLinearSmallStrainFEMForceField<Vec1Types_>;

// Explicit template instantiation for EdgePressureForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::EdgePressureForceField<Vec3Types_>;

// Explicit template instantiation for EdgeSetGeometryAlgorithms
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Rigid3Types_>;

// Explicit template instantiation for EllipsoidForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::EllipsoidForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::EllipsoidForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::EllipsoidForceField<Vec1Types_>;

// Explicit template instantiation for ExtrudeEdgesAndGenerateQuads
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::ExtrudeEdgesAndGenerateQuads<Vec3Types_>;

// Explicit template instantiation for ExtrudeQuadsAndGenerateHexas
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::ExtrudeQuadsAndGenerateHexas<Vec3Types_>;

// Explicit template instantiation for ExtrudeSurface
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::ExtrudeSurface<Vec3Types_>;

// Explicit template instantiation for FastTetrahedralCorotationalForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::FastTetrahedralCorotationalForceField<Vec3Types_>;

// Explicit template instantiation for FastTriangularBendingSprings
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::FastTriangularBendingSprings<Vec3Types_>;

// Explicit template instantiation for FixedLagrangianConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Rigid3Types_>;

// Explicit template instantiation for FixedPlaneProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedPlaneProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedPlaneProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedPlaneProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for FixedProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedProjectiveConstraint<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for FixedRotationProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedRotationProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for FixedTranslationProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedTranslationProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedTranslationProjectiveConstraint<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::FixedTranslationProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for FrameSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::FrameSpringForceField<Rigid3Types_>;

// Explicit template instantiation for GearSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::GearSpringForceField<Rigid3Types_>;

// Explicit template instantiation for GenerateCylinder
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::GenerateCylinder<Vec3Types_>;

// Explicit template instantiation for GenerateGrid
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::GenerateGrid<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::GenerateGrid<Vec3Types_>;

// Explicit template instantiation for GenerateRigidMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::GenerateRigidMass<Rigid3Types_>;

// Explicit template instantiation for GenerateSphere
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::GenerateSphere<Vec3Types_>;

// Explicit template instantiation for GroupFilterYoungModulus
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::GroupFilterYoungModulus<Vec3Types_>;

// Explicit template instantiation for HausdorffDistance
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::HausdorffDistance<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::HausdorffDistance<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::HausdorffDistance<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::HausdorffDistance<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::HausdorffDistance<Rigid3Types_>;

// Explicit template instantiation for HermiteSplineProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::HermiteSplineProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::HermiteSplineProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for HexahedralFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::HexahedralFEMForceField<Vec3Types_>;

// Explicit template instantiation for HexahedralFEMForceFieldAndMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::HexahedralFEMForceFieldAndMass<Vec3Types_>;

// Explicit template instantiation for HexahedronCompositeFEMForceFieldAndMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::nonuniform::HexahedronCompositeFEMForceFieldAndMass<Vec3Types_>;

// Explicit template instantiation for HexahedronCorotationalFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::HexahedronCorotationalFEMForceField<Vec3Types_>;

// Explicit template instantiation for HexahedronFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::HexahedronFEMForceField<Vec3Types_>;

// Explicit template instantiation for HexahedronFEMForceFieldAndMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::HexahedronFEMForceFieldAndMass<Vec3Types_>;

// Explicit template instantiation for HexahedronFEMMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::HexahedronFEMMass<Vec3Types_>;

// Explicit template instantiation for HexahedronLinearSmallStrainFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::HexahedronLinearSmallStrainFEMForceField<Vec3Types_>;

// Explicit template instantiation for HexahedronSetGeometryAlgorithms
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::HexahedronSetGeometryAlgorithms<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::HexahedronSetGeometryAlgorithms<Vec3Types_>;

// Explicit template instantiation for IdentityMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Vec6Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Rigid2Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Rigid3Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Vec6Types_, Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Vec3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Rigid3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Rigid2Types_, Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Vec2Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMapping<Vec1Types_, Vec1Types_>;

// Explicit template instantiation for IdentityMultiMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMultiMapping<Rigid3Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMultiMapping<Vec2Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMultiMapping<Vec3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::IdentityMultiMapping<Vec1Types_, Vec1Types_>;

// Explicit template instantiation for IndexValueMapper
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::IndexValueMapper<Vec3Types_>;

// Explicit template instantiation for Indices2ValuesMapper
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::Indices2ValuesMapper<Vec3Types_>;

// Explicit template instantiation for IndicesFromValues
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::IndicesFromValues<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::IndicesFromValues<Vec3Types_>;

// Explicit template instantiation for InteractionEllipsoidForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::InteractionEllipsoidForceField<Vec3Types_, Rigid3Types_>;

// Explicit template instantiation for JoinPoints
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::JoinPoints<Vec3Types_>;

// Explicit template instantiation for JointSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::JointSpringForceField<Rigid3Types_>;

// Explicit template instantiation for LCPForceFeedback
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::haptics::LCPForceFeedback<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::haptics::LCPForceFeedback<Rigid3Types_>;

// Explicit template instantiation for LineCollisionModel
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::collision::geometry::LineCollisionModel<Vec3Types_>;

// Explicit template instantiation for LineProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LineProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LineProjectiveConstraint<Vec3Types_>;

// Explicit template instantiation for LineSetSkinningMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::LineSetSkinningMapping<Rigid3Types_, Vec3Types_>;

// Explicit template instantiation for LinearForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::LinearForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::LinearForceField<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::LinearForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::LinearForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::LinearForceField<Rigid3Types_>;

// Explicit template instantiation for LinearMovementProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for LinearSolverConstraintCorrection
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Rigid3Types_>;

// Explicit template instantiation for LinearVelocityProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for MappedObject
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MappedObject<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MappedObject<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MappedObject<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MappedObject<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MappedObject<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MappedObject<Rigid3Types_>;

// Explicit template instantiation for MechanicalObject
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MechanicalObject<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MechanicalObject<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MechanicalObject<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MechanicalObject<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MechanicalObject<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::statecontainer::MechanicalObject<Rigid3Types_>;

// Explicit template instantiation for MechanicalStateController
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::controller::MechanicalStateController<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::controller::MechanicalStateController<Rigid3Types_>;

// Explicit template instantiation for MergeMeshes
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergeMeshes<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergeMeshes<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergeMeshes<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergeMeshes<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergeMeshes<Rigid3Types_>;

// Explicit template instantiation for MergePoints
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergePoints<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergePoints<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergePoints<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergePoints<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MergePoints<Rigid3Types_>;

// Explicit template instantiation for Mesh2PointMechanicalMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::Mesh2PointMechanicalMapping<Vec3Types_, Vec3Types_>;

// Explicit template instantiation for MeshBarycentricMapperEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MeshBarycentricMapperEngine<Vec3Types_>;

// Explicit template instantiation for MeshClosingEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::MeshClosingEngine<Vec3Types_>;

// Explicit template instantiation for MeshMatrixMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::MeshMatrixMass<Vec1Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::MeshMatrixMass<Vec2Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::MeshMatrixMass<Vec3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::MeshMatrixMass<Vec1Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::MeshMatrixMass<Vec1Types_, Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::MeshMatrixMass<Vec2Types_, Vec2Types_>;

// Explicit template instantiation for MeshROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::MeshROI<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::MeshROI<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::MeshROI<Rigid3Types_>;

// Explicit template instantiation for MeshSampler
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::MeshSampler<Vec3Types_>;

// Explicit template instantiation for MeshSplittingEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::MeshSplittingEngine<Vec3Types_>;

// Explicit template instantiation for MeshSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::MeshSpringForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::MeshSpringForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::MeshSpringForceField<Vec1Types_>;

// Explicit template instantiation for MeshSubsetEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::MeshSubsetEngine<Vec3Types_>;

// Explicit template instantiation for NearestPointROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::NearestPointROI<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::NearestPointROI<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::NearestPointROI<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::NearestPointROI<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::NearestPointROI<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::NearestPointROI<Rigid3Types_>;

// Explicit template instantiation for NonUniformHexahedralFEMForceFieldAndMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::nonuniform::NonUniformHexahedralFEMForceFieldAndMass<Vec3Types_>;

// Explicit template instantiation for NonUniformHexahedronFEMForceFieldAndMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::nonuniform::NonUniformHexahedronFEMForceFieldAndMass<Vec3Types_>;

// Explicit template instantiation for NormEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::NormEngine<Vec3Types_>;

// Explicit template instantiation for NormalsFromPoints
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::NormalsFromPoints<Vec3Types_>;

// Explicit template instantiation for NullForceFeedbackT
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::haptics::NullForceFeedbackT<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::haptics::NullForceFeedbackT<Rigid3Types_>;

// Explicit template instantiation for OscillatingTorsionPressureForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::OscillatingTorsionPressureForceField<Vec3Types_>;

// Explicit template instantiation for OscillatorProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::OscillatorProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::OscillatorProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for PairBoxROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::PairBoxROI<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::PairBoxROI<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::PairBoxROI<Rigid3Types_>;

// Explicit template instantiation for ParabolicProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::ParabolicProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::ParabolicProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for PartialFixedProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for PartialLinearMovementProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for PatchTestMovementProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PatchTestMovementProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PatchTestMovementProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for PenalityContactForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::collision::response::contact::PenalityContactForceField<Vec3Types_>;

// Explicit template instantiation for PlaneForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::PlaneForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::PlaneForceField<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::PlaneForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::PlaneForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::PlaneForceField<Rigid3Types_>;

// Explicit template instantiation for PlaneProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PlaneProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PlaneProjectiveConstraint<Vec3Types_>;

// Explicit template instantiation for PlaneROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::PlaneROI<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::PlaneROI<Rigid3Types_>;

// Explicit template instantiation for PointCollisionModel
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::collision::geometry::PointCollisionModel<Vec3Types_>;

// Explicit template instantiation for PointProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PointProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PointProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PointProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PointProjectiveConstraint<Vec6Types_>;

// Explicit template instantiation for PointSetGeometryAlgorithms
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::PointSetGeometryAlgorithms<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::PointSetGeometryAlgorithms<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::PointSetGeometryAlgorithms<Vec1Types_>;

// Explicit template instantiation for PointsFromIndices
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::PointsFromIndices<Vec3Types_>;

// Explicit template instantiation for PolynomialRestShapeSpringsForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::PolynomialRestShapeSpringsForceField<Vec3Types_>;

// Explicit template instantiation for PolynomialSpringsForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::PolynomialSpringsForceField<Vec3Types_>;

// Explicit template instantiation for PositionBasedDynamicsProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for PrecomputedConstraintCorrection
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::PrecomputedConstraintCorrection<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::PrecomputedConstraintCorrection<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::PrecomputedConstraintCorrection<Rigid3Types_>;

// Explicit template instantiation for PrismCorotationalFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::PrismCorotationalFEMForceField<Vec3Types_>;

// Explicit template instantiation for PrismFEMMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::PrismFEMMass<Vec3Types_>;

// Explicit template instantiation for PrismLinearSmallStrainFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::PrismLinearSmallStrainFEMForceField<Vec3Types_>;

// Explicit template instantiation for ProjectiveTransformEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::ProjectiveTransformEngine<Vec3Types_>;

// Explicit template instantiation for ProximityROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::ProximityROI<Vec3Types_>;

// Explicit template instantiation for QuadBendingFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::QuadBendingFEMForceField<Vec3Types_>;

// Explicit template instantiation for QuadBendingSprings
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::QuadBendingSprings<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::QuadBendingSprings<Vec3Types_>;

// Explicit template instantiation for QuadCorotationalFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::QuadCorotationalFEMForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::QuadCorotationalFEMForceField<Vec3Types_>;

// Explicit template instantiation for QuadFEMMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::QuadFEMMass<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::QuadFEMMass<Vec3Types_>;

// Explicit template instantiation for QuadLinearSmallStrainFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::QuadLinearSmallStrainFEMForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::QuadLinearSmallStrainFEMForceField<Vec3Types_>;

// Explicit template instantiation for QuadPressureForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::QuadPressureForceField<Vec3Types_>;

// Explicit template instantiation for QuadSetGeometryAlgorithms
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::QuadSetGeometryAlgorithms<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::QuadSetGeometryAlgorithms<Vec3Types_>;

// Explicit template instantiation for QuadularBendingSprings
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::QuadularBendingSprings<Vec3Types_>;

// Explicit template instantiation for QuatToRigidEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::QuatToRigidEngine<Vec3Types_>;

// Explicit template instantiation for RandomPointDistributionInSurface
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::RandomPointDistributionInSurface<Vec3Types_>;

// Explicit template instantiation for RegularGridSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec6Types_>;

// Explicit template instantiation for RepulsiveSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RepulsiveSpringForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RepulsiveSpringForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RepulsiveSpringForceField<Vec1Types_>;

// Explicit template instantiation for RestShapeSpringsForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RestShapeSpringsForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RestShapeSpringsForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::RestShapeSpringsForceField<Rigid3Types_>;

// Explicit template instantiation for RigidMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::RigidMapping<Rigid2Types_, Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::RigidMapping<Rigid3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::RigidMapping<Rigid3Types_, Rigid3Types_>;

// Explicit template instantiation for RigidToQuatEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::RigidToQuatEngine<Vec3Types_>;

// Explicit template instantiation for ShapeMatching
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::ShapeMatching<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::ShapeMatching<Rigid3Types_>;

// Explicit template instantiation for SimpleTesselatedTetraMechanicalMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SimpleTesselatedTetraMechanicalMapping<Vec3Types_, Vec3Types_>;

// Explicit template instantiation for SkeletalMotionProjectiveConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::projective::SkeletalMotionProjectiveConstraint<Rigid3Types_>;

// Explicit template instantiation for SkinningMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SkinningMapping<Rigid3Types_, Vec3Types_>;

// Explicit template instantiation for SlidingLagrangianConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::SlidingLagrangianConstraint<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::SlidingLagrangianConstraint<Rigid3Types_>;

// Explicit template instantiation for SmoothMeshEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::SmoothMeshEngine<Vec3Types_>;

// Explicit template instantiation for SphereCollisionModel
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::collision::geometry::SphereCollisionModel<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::collision::geometry::SphereCollisionModel<Rigid3Types_>;

// Explicit template instantiation for SphereForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::SphereForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::SphereForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::SphereForceField<Vec1Types_>;

// Explicit template instantiation for SphereROI
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::SphereROI<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::SphereROI<Rigid3Types_>;

// Explicit template instantiation for Spiral
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::Spiral<Vec3Types_>;

// Explicit template instantiation for SpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::SpringForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::SpringForceField<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::SpringForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::SpringForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::SpringForceField<Rigid3Types_>;

// Explicit template instantiation for SquareDistanceMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::SquareDistanceMapping<Vec3Types_, Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::SquareDistanceMapping<Rigid3Types_, Vec1Types_>;

// Explicit template instantiation for SquareMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::SquareMapping<Vec1Types_, Vec1Types_>;

// Explicit template instantiation for StandardTetrahedralFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::hyperelastic::StandardTetrahedralFEMForceField<Vec3Types_>;

// Explicit template instantiation for StopperLagrangianConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::StopperLagrangianConstraint<Vec1Types_>;

// Explicit template instantiation for SubsetMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMapping<Rigid3Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMapping<Vec3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMapping<Vec1Types_, Vec1Types_>;

// Explicit template instantiation for SubsetMultiMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMultiMapping<Rigid3Types_, Rigid3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMultiMapping<Vec3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMultiMapping<Rigid3Types_, Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMultiMapping<Vec1Types_, Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::SubsetMultiMapping<Vec2Types_, Vec2Types_>;

// Explicit template instantiation for SubsetTopology
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::SubsetTopology<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::SubsetTopology<Rigid3Types_>;

// Explicit template instantiation for SumEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::SumEngine<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::analyze::SumEngine<Vec1Types_>;

// Explicit template instantiation for SurfacePressureForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::SurfacePressureForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::SurfacePressureForceField<Rigid3Types_>;

// Explicit template instantiation for TaitSurfacePressureForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::TaitSurfacePressureForceField<Vec3Types_>;

// Explicit template instantiation for TetrahedralCorotationalFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TetrahedralCorotationalFEMForceField<Vec3Types_>;

// Explicit template instantiation for TetrahedralTensorMassForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::tensormass::TetrahedralTensorMassForceField<Vec3Types_>;

// Explicit template instantiation for TetrahedronCorotationalFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TetrahedronCorotationalFEMForceField<Vec3Types_>;

// Explicit template instantiation for TetrahedronDiffusionFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::diffusion::TetrahedronDiffusionFEMForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::diffusion::TetrahedronDiffusionFEMForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::diffusion::TetrahedronDiffusionFEMForceField<Vec1Types_>;

// Explicit template instantiation for TetrahedronFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TetrahedronFEMForceField<Vec3Types_>;

// Explicit template instantiation for TetrahedronFEMMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::TetrahedronFEMMass<Vec3Types_>;

// Explicit template instantiation for TetrahedronHyperelasticityFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::hyperelastic::TetrahedronHyperelasticityFEMForceField<Vec3Types_>;

// Explicit template instantiation for TetrahedronLinearSmallStrainFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TetrahedronLinearSmallStrainFEMForceField<Vec3Types_>;

// Explicit template instantiation for TetrahedronSetGeometryAlgorithms
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::TetrahedronSetGeometryAlgorithms<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::TetrahedronSetGeometryAlgorithms<Vec3Types_>;

// Explicit template instantiation for TopologyBoundingTrasher
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::utility::TopologyBoundingTrasher<Vec3Types_>;

// Explicit template instantiation for TorsionForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::TorsionForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::TorsionForceField<Rigid3Types_>;

// Explicit template instantiation for TrailRenderer
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::TrailRenderer<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::TrailRenderer<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::TrailRenderer<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::TrailRenderer<Rigid3Types_>;

// Explicit template instantiation for TransformEngine
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::TransformEngine<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::TransformEngine<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::TransformEngine<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::TransformEngine<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::TransformEngine<Rigid3Types_>;

// Explicit template instantiation for TransformPosition
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::TransformPosition<Vec3Types_>;

// Explicit template instantiation for TriangleBendingSprings
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::TriangleBendingSprings<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::TriangleBendingSprings<Vec3Types_>;

// Explicit template instantiation for TriangleCollisionModel
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::collision::geometry::TriangleCollisionModel<Vec3Types_>;

// Explicit template instantiation for TriangleCorotationalFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangleCorotationalFEMForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangleCorotationalFEMForceField<Vec3Types_>;

// Explicit template instantiation for TriangleFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangleFEMForceField<Vec3Types_>;

// Explicit template instantiation for TriangleFEMMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::TriangleFEMMass<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::TriangleFEMMass<Vec3Types_>;

// Explicit template instantiation for TriangleLinearSmallStrainFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangleLinearSmallStrainFEMForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangleLinearSmallStrainFEMForceField<Vec3Types_>;

// Explicit template instantiation for TrianglePressureForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::TrianglePressureForceField<Vec3Types_>;

// Explicit template instantiation for TriangleSetGeometryAlgorithms
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::TriangleSetGeometryAlgorithms<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::topology::container::dynamic::TriangleSetGeometryAlgorithms<Vec3Types_>;

// Explicit template instantiation for TriangularAnisotropicFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangularAnisotropicFEMForceField<Vec3Types_>;

// Explicit template instantiation for TriangularBendingSprings
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::TriangularBendingSprings<Vec3Types_>;

// Explicit template instantiation for TriangularBiquadraticSpringsForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::TriangularBiquadraticSpringsForceField<Vec3Types_>;

// Explicit template instantiation for TriangularFEMForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangularFEMForceField<Vec3Types_>;

// Explicit template instantiation for TriangularFEMForceFieldOptim
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::fem::elastic::TriangularFEMForceFieldOptim<Vec3Types_>;

// Explicit template instantiation for TriangularQuadraticSpringsForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::TriangularQuadraticSpringsForceField<Vec3Types_>;

// Explicit template instantiation for TriangularTensorMassForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::tensormass::TriangularTensorMassForceField<Vec3Types_>;

// Explicit template instantiation for TubularMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::linear::TubularMapping<Rigid3Types_, Vec3Types_>;

// Explicit template instantiation for UncoupledConstraintCorrection
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Rigid3Types_>;

// Explicit template instantiation for UniformLagrangianConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::UniformLagrangianConstraint<Vec1Types_>;

// Explicit template instantiation for UniformMass
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::UniformMass<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::UniformMass<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::UniformMass<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::UniformMass<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::UniformMass<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mass::UniformMass<Rigid3Types_>;

// Explicit template instantiation for UniformVelocityDampingForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::UniformVelocityDampingForceField<Rigid2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec1Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mechanicalload::UniformVelocityDampingForceField<Rigid3Types_>;

// Explicit template instantiation for UnilateralLagrangianConstraint
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::constraint::lagrangian::model::UnilateralLagrangianConstraint<Vec3Types_>;

// Explicit template instantiation for ValuesFromIndices
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::ValuesFromIndices<Vec2Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::ValuesFromIndices<Vec6Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::ValuesFromIndices<Vec3Types_>;

// Explicit template instantiation for ValuesFromPositions
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::ValuesFromPositions<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::select::ValuesFromPositions<Rigid3Types_>;

// Explicit template instantiation for VectorSpringForceField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::solidmechanics::spring::VectorSpringForceField<Vec3Types_>;

// Explicit template instantiation for Vertex2Frame
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::transform::Vertex2Frame<Rigid3Types_>;

// Explicit template instantiation for VisualModelImpl
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::VisualModelImpl<Vec3Types_>;

// Explicit template instantiation for VisualPointCloud
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::VisualPointCloud<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::VisualPointCloud<Rigid3Types_>;

// Explicit template instantiation for VisualVectorField
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::visual::VisualVectorField<Vec3Types_>;

// Explicit template instantiation for VolumeFromTetrahedrons
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::VolumeFromTetrahedrons<Vec3Types_>;

// Explicit template instantiation for VolumeFromTriangles
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::VolumeFromTriangles<Vec3Types_>;
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::engine::generate::VolumeFromTriangles<Rigid3Types_>;

// Explicit template instantiation for VolumeMapping
template class SOFA_COMPONENT_LONGDOUBLE_API sofa::component::mapping::nonlinear::VolumeMapping<Vec3Types_, Vec1Types_>;


void registerComponents(sofa::core::ObjectFactory* factory)
{
factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Constraint the movement by a rigid transform.)")
    .add<sofa::component::constraint::projective::AffineMovementProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::AffineMovementProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Angular springs applied to rotational degrees of freedom of a rigid body or frame.)")
    .add<sofa::component::solidmechanics::spring::AngularSpringForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping each triangle in a topology to a scalar value representing its area.)")
    .add<sofa::component::mapping::nonlinear::AreaMapping<Vec3Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Attach given pair of particles, projecting the positions of the second particles to the first ones.)")
    .add<sofa::component::constraint::projective::AttachProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::AttachProjectiveConstraint<Rigid2Types_>>()
    .add<sofa::component::constraint::projective::AttachProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::AttachProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::AttachProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(AugmentedLagrangianConstraint)")
    .add<sofa::component::constraint::lagrangian::model::AugmentedLagrangianConstraint<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute the average of coordinates.)")
    .add<sofa::component::engine::analyze::AverageCoord<Vec3Types_>>()
    .add<sofa::component::engine::analyze::AverageCoord<Vec2Types_>>()
    .add<sofa::component::engine::analyze::AverageCoord<Rigid2Types_>>()
    .add<sofa::component::engine::analyze::AverageCoord<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping using barycentric coordinates of the child with respect to cells of its parent.
Mapping using barycentric coordinates of the child with respect to cells of its parent.)")
    .add<sofa::component::mapping::linear::BarycentricMapping<Vec3Types_, Rigid3Types_>>()
    .add<sofa::component::mapping::linear::BarycentricMapping<Vec3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Beam finite elements.)")
    .add<sofa::component::solidmechanics::fem::elastic::BeamFEMForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Set the positions and velocities of points attached to a beam using linear interpolation between DOFs.)")
    .add<sofa::component::mapping::linear::BeamLinearMapping<Rigid3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(BilateralLagrangianConstraint defining an holonomic equality constraint (attachment).)")
    .add<sofa::component::constraint::lagrangian::model::BilateralLagrangianConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::lagrangian::model::BilateralLagrangianConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Export the simulation result as blender point cache files.)")
    .add<sofa::component::io::mesh::BlenderExporter<Vec3Types_>>()
    .add<sofa::component::io::mesh::BlenderExporter<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine selecting the any primitives (vertex/edge/triangle/quad/tetrahedron/hexahedron) inside given boxes.)")
    .add<sofa::component::engine::select::BoxROI<Vec2Types_>>()
    .add<sofa::component::engine::select::BoxROI<Vec6Types_>>()
    .add<sofa::component::engine::select::BoxROI<Vec3Types_>>()
    .add<sofa::component::engine::select::BoxROI<Vec1Types_>>()
    .add<sofa::component::engine::select::BoxROI<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Set the point to the center of mass of the DOFs it is attached to)")
    .add<sofa::component::mapping::linear::CenterOfMassMapping<Rigid2Types_, Vec2Types_>>()
    .add<sofa::component::mapping::linear::CenterOfMassMapping<Rigid3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Set the point to the center of mass of the DOFs it is attached to.)")
    .add<sofa::component::mapping::linear::CenterOfMassMulti2Mapping<Vec3Types_, Rigid3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Set the point to the center of mass of the DOFs it is attached to.)")
    .add<sofa::component::mapping::linear::CenterOfMassMultiMapping<Rigid3Types_, Rigid3Types_>>()
    .add<sofa::component::mapping::linear::CenterOfMassMultiMapping<Rigid3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::CenterOfMassMultiMapping<Vec3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Group points into overlapping clusters according to a user defined number of clusters and radius.)")
    .add<sofa::component::engine::analyze::ClusteringEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Find the points that are NOT in the input sets.)")
    .add<sofa::component::engine::select::ComplementaryROI<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Outward repulsion applied by a cone geometry.)")
    .add<sofa::component::mechanicalload::ConicalForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Constant forces applied to given degrees of freedom.)")
    .add<sofa::component::mechanicalload::ConstantForceField<Vec2Types_>>()
    .add<sofa::component::mechanicalload::ConstantForceField<Rigid2Types_>>()
    .add<sofa::component::mechanicalload::ConstantForceField<Vec6Types_>>()
    .add<sofa::component::mechanicalload::ConstantForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::ConstantForceField<Vec1Types_>>()
    .add<sofa::component::mechanicalload::ConstantForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Collision model which represents a set of rigid cylinders.)")
    .add<sofa::component::collision::geometry::CylinderCollisionModel<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Set the positions and velocities of points attached to a rigid parent.)")
    .add<sofa::component::mapping::linear::DeformableOnRigidFrameMapping<Vec3Types_, Rigid3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute a lumped (diagonalized) mass matrix resulting from the space integration of a density over a domain.)")
    .add<sofa::component::mass::DiagonalMass<Vec1Types_, Vec3Types_>>()
    .add<sofa::component::mass::DiagonalMass<Rigid2Types_, Rigid3Types_>>()
    .add<sofa::component::mass::DiagonalMass<Vec2Types_, Vec3Types_>>()
    .add<sofa::component::mass::DiagonalMass<Rigid3Types_, Rigid3Types_>>()
    .add<sofa::component::mass::DiagonalMass<Vec3Types_, Vec3Types_>>()
    .add<sofa::component::mass::DiagonalMass<Vec1Types_, Vec2Types_>>()
    .add<sofa::component::mass::DiagonalMass<Rigid2Types_, Rigid2Types_>>()
    .add<sofa::component::mass::DiagonalMass<Vec2Types_, Vec2Types_>>()
    .add<sofa::component::mass::DiagonalMass<Vec1Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Diagonal velocity damping.)")
    .add<sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec2Types_>>()
    .add<sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Rigid2Types_>>()
    .add<sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec6Types_>>()
    .add<sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Vec1Types_>>()
    .add<sofa::component::mechanicalload::DiagonalVelocityDampingForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Dilates a given mesh by moving vertices along their normal.)")
    .add<sofa::component::engine::transform::DilateEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Attach given particles to their initial positions.)")
    .add<sofa::component::constraint::projective::DirectionProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::DirectionProjectiveConstraint<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Converts a vector of Rigid to a vector of displacement matrices.)")
    .add<sofa::component::engine::transform::DisplacementMatrixEngine<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping point positions to distances from target points.)")
    .add<sofa::component::mapping::nonlinear::DistanceFromTargetMapping<Vec1Types_, Vec1Types_>>()
    .add<sofa::component::mapping::nonlinear::DistanceFromTargetMapping<Vec3Types_, Vec1Types_>>()
    .add<sofa::component::mapping::nonlinear::DistanceFromTargetMapping<Rigid3Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping each connected pair of Degrees of Freedom (DoFs) in a topology to a scalar value representing the distance between them.)")
    .add<sofa::component::mapping::nonlinear::DistanceMapping<Vec3Types_, Vec1Types_>>()
    .add<sofa::component::mapping::nonlinear::DistanceMapping<Rigid3Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping point positions from several mechanical states to distances (in distance unit).)")
    .add<sofa::component::mapping::nonlinear::DistanceMultiMapping<Vec3Types_, Vec1Types_>>()
    .add<sofa::component::mapping::nonlinear::DistanceMultiMapping<Rigid3Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping that computes the distance to a plane)")
    .add<sofa::component::mapping::linear::DistanceToPlaneMapping<Vec2Types_>>()
    .add<sofa::component::mapping::linear::DistanceToPlaneMapping<Rigid2Types_>>()
    .add<sofa::component::mapping::linear::DistanceToPlaneMapping<Vec6Types_>>()
    .add<sofa::component::mapping::linear::DistanceToPlaneMapping<Vec3Types_>>()
    .add<sofa::component::mapping::linear::DistanceToPlaneMapping<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute distances based on a grid.)")
    .add<sofa::component::engine::analyze::Distances<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Dynamic sparse grid geometry algorithms.)")
    .add<sofa::component::topology::container::dynamic::DynamicSparseGridGeometryAlgorithms<Vec2Types_>>()
    .add<sofa::component::topology::container::dynamic::DynamicSparseGridGeometryAlgorithms<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear beams using the corotational approach)")
    .add<sofa::component::solidmechanics::fem::elastic::EdgeCorotationalFEMForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::fem::elastic::EdgeCorotationalFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Finite-element mass (inertia and body force) defined on edges)")
    .add<sofa::component::mass::EdgeFEMMass<Vec3Types_>>()
    .add<sofa::component::mass::EdgeFEMMass<Vec2Types_>>()
    .add<sofa::component::mass::EdgeFEMMass<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear beams assuming small strain)")
    .add<sofa::component::solidmechanics::fem::elastic::EdgeLinearSmallStrainFEMForceField<Vec3Types_>>()
    .add<sofa::component::solidmechanics::fem::elastic::EdgeLinearSmallStrainFEMForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::fem::elastic::EdgeLinearSmallStrainFEMForceField<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Apply a force on edges, distributed on the edge nodes.)")
    .add<sofa::component::mechanicalload::EdgePressureForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Geometry algorithms dedicated to an edge topology.)")
    .add<sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Vec2Types_>>()
    .add<sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Rigid2Types_>>()
    .add<sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Vec3Types_>>()
    .add<sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Vec1Types_>>()
    .add<sofa::component::topology::container::dynamic::EdgeSetGeometryAlgorithms<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Outward / inward repulsion applied by an ellipsoid geometry.)")
    .add<sofa::component::mechanicalload::EllipsoidForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::EllipsoidForceField<Vec2Types_>>()
    .add<sofa::component::mechanicalload::EllipsoidForceField<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine extruding an edge-based curve into a quad surface patch.)")
    .add<sofa::component::engine::generate::ExtrudeEdgesAndGenerateQuads<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine extruding a quad-based surface into a set of hexahedral elements.)")
    .add<sofa::component::engine::generate::ExtrudeQuadsAndGenerateHexas<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine creating a mesh from the extrusion of the surface of a given mesh.)")
    .add<sofa::component::engine::generate::ExtrudeSurface<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Fast Corotational Tetrahedral Mesh.)")
    .add<sofa::component::solidmechanics::fem::elastic::FastTetrahedralCorotationalForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs added to a triangular mesh to prevent bending.)")
    .add<sofa::component::solidmechanics::spring::FastTriangularBendingSprings<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Lagrangian-based fixation of DOFs of the model.)")
    .add<sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::lagrangian::model::FixedLagrangianConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Project particles on a given plane.)")
    .add<sofa::component::constraint::projective::FixedPlaneProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::FixedPlaneProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::FixedPlaneProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Attach given particles to their initial positions.)")
    .add<sofa::component::constraint::projective::FixedProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::FixedProjectiveConstraint<Rigid2Types_>>()
    .add<sofa::component::constraint::projective::FixedProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::FixedProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::FixedProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::FixedProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Prevents rotation around x or/and y or/and z axis.)")
    .add<sofa::component::constraint::projective::FixedRotationProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Attach given rigids to their initial positions but they still can have rotations.)")
    .add<sofa::component::constraint::projective::FixedTranslationProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::FixedTranslationProjectiveConstraint<Rigid2Types_>>()
    .add<sofa::component::constraint::projective::FixedTranslationProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs for Flexibles.)")
    .add<sofa::component::solidmechanics::spring::FrameSpringForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Gear springs for Rigids.)")
    .add<sofa::component::solidmechanics::spring::GearSpringForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine generating a cylindrical tetrahedral mesh.)")
    .add<sofa::component::engine::generate::GenerateCylinder<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine generating a grid tetrahedral or hexahedral mesh.)")
    .add<sofa::component::engine::generate::GenerateGrid<Vec2Types_>>()
    .add<sofa::component::engine::generate::GenerateGrid<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine computing the RigidMass of a mesh: mass, volume and inertia matrix.)")
    .add<sofa::component::engine::generate::GenerateRigidMass<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine generating a spherical (Bezier) tetrahedral and triangular mesh.)")
    .add<sofa::component::engine::generate::GenerateSphere<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine defining a vector of young modulus according of a list of defined groups.)")
    .add<sofa::component::engine::generate::GroupFilterYoungModulus<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute the Hausdorff distance of two point clouds.)")
    .add<sofa::component::engine::analyze::HausdorffDistance<Vec2Types_>>()
    .add<sofa::component::engine::analyze::HausdorffDistance<Rigid2Types_>>()
    .add<sofa::component::engine::analyze::HausdorffDistance<Vec3Types_>>()
    .add<sofa::component::engine::analyze::HausdorffDistance<Vec1Types_>>()
    .add<sofa::component::engine::analyze::HausdorffDistance<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Apply a hermite cubic spline trajectory to given points.)")
    .add<sofa::component::constraint::projective::HermiteSplineProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::HermiteSplineProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hexahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::elastic::HexahedralFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hexahedral finite elements with mass)")
    .add<sofa::component::solidmechanics::fem::elastic::HexahedralFEMForceFieldAndMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Non uniform Hexahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::nonuniform::HexahedronCompositeFEMForceFieldAndMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear hexahedra using the corotational approach)")
    .add<sofa::component::solidmechanics::fem::elastic::HexahedronCorotationalFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hexahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::elastic::HexahedronFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hexahedral finite elements with mass.)")
    .add<sofa::component::solidmechanics::fem::elastic::HexahedronFEMForceFieldAndMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Finite-element mass (inertia and body force) defined on hexahedra)")
    .add<sofa::component::mass::HexahedronFEMMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear hexahedra assuming small strain)")
    .add<sofa::component::solidmechanics::fem::elastic::HexahedronLinearSmallStrainFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Geometry algorithms dedicated to an hexahedral topology.)")
    .add<sofa::component::topology::container::dynamic::HexahedronSetGeometryAlgorithms<Vec2Types_>>()
    .add<sofa::component::topology::container::dynamic::HexahedronSetGeometryAlgorithms<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Special case of mapping where the child DOFs are the same as the parent ones)")
    .add<sofa::component::mapping::linear::IdentityMapping<Vec6Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Rigid2Types_, Vec2Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Rigid3Types_, Rigid3Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Vec6Types_, Vec6Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Vec3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Rigid3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Rigid2Types_, Rigid2Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Vec2Types_, Vec2Types_>>()
    .add<sofa::component::mapping::linear::IdentityMapping<Vec1Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Concatenate several mechanical states together.)")
    .add<sofa::component::mapping::linear::IdentityMultiMapping<Rigid3Types_, Rigid3Types_>>()
    .add<sofa::component::mapping::linear::IdentityMultiMapping<Vec2Types_, Vec2Types_>>()
    .add<sofa::component::mapping::linear::IdentityMultiMapping<Vec3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::IdentityMultiMapping<Vec1Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Input values to output values mapper. Includes indices rules, such as replacement, resize.)")
    .add<sofa::component::engine::transform::IndexValueMapper<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Input multiple values to output values mapper. Includes indices rules, such as replacement, resize.)")
    .add<sofa::component::engine::transform::Indices2ValuesMapper<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine finding the indices of a list of values within a larger set of values.)")
    .add<sofa::component::engine::select::IndicesFromValues<Vec2Types_>>()
    .add<sofa::component::engine::select::IndicesFromValues<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Outward / inward repulsion applied by an ellipsoid geometry, which can possibly act on several objects.)")
    .add<sofa::component::mechanicalload::InteractionEllipsoidForceField<Vec3Types_, Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Merge points from a set of points within a given distance.)")
    .add<sofa::component::engine::generate::JoinPoints<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs for Rigids.)")
    .add<sofa::component::solidmechanics::spring::JointSpringForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(LCP force feedback for the device.)")
    .add<sofa::component::haptics::LCPForceFeedback<Vec1Types_>>()
    .add<sofa::component::haptics::LCPForceFeedback<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Collision model using a linear mesh, as described in MeshTopology.)")
    .add<sofa::component::collision::geometry::LineCollisionModel<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Attach given particles to their initial positions.)")
    .add<sofa::component::constraint::projective::LineProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::LineProjectiveConstraint<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Skin a model from a set of rigid lines.)")
    .add<sofa::component::mapping::linear::LineSetSkinningMapping<Rigid3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Linearly-interpolated force applied to given degrees of freedom.)")
    .add<sofa::component::mechanicalload::LinearForceField<Vec2Types_>>()
    .add<sofa::component::mechanicalload::LinearForceField<Vec6Types_>>()
    .add<sofa::component::mechanicalload::LinearForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::LinearForceField<Vec1Types_>>()
    .add<sofa::component::mechanicalload::LinearForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Impose a motion to given DOFs (translation and rotation).)")
    .add<sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::LinearMovementProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Component computing constraint forces within a simulated body using the compliance method.)")
    .add<sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Vec3Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Vec2Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Vec1Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::LinearSolverConstraintCorrection<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Impose a velocity to given DOFs (translation and rotation).)")
    .add<sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::LinearVelocityProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapped state vectors)")
    .add<sofa::component::statecontainer::MappedObject<Vec2Types_>>()
    .add<sofa::component::statecontainer::MappedObject<Rigid2Types_>>()
    .add<sofa::component::statecontainer::MappedObject<Vec6Types_>>()
    .add<sofa::component::statecontainer::MappedObject<Vec3Types_>>()
    .add<sofa::component::statecontainer::MappedObject<Vec1Types_>>()
    .add<sofa::component::statecontainer::MappedObject<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(mechanical state vectors)")
    .add<sofa::component::statecontainer::MechanicalObject<Vec2Types_>>()
    .add<sofa::component::statecontainer::MechanicalObject<Rigid2Types_>>()
    .add<sofa::component::statecontainer::MechanicalObject<Vec6Types_>>()
    .add<sofa::component::statecontainer::MechanicalObject<Vec3Types_>>()
    .add<sofa::component::statecontainer::MechanicalObject<Vec1Types_>>()
    .add<sofa::component::statecontainer::MechanicalObject<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Provides a Mouse & Keyboard user control on a Mechanical State.)")
    .add<sofa::component::controller::MechanicalStateController<Vec1Types_>>()
    .add<sofa::component::controller::MechanicalStateController<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Merge several meshes.)")
    .add<sofa::component::engine::generate::MergeMeshes<Vec2Types_>>()
    .add<sofa::component::engine::generate::MergeMeshes<Rigid2Types_>>()
    .add<sofa::component::engine::generate::MergeMeshes<Vec3Types_>>()
    .add<sofa::component::engine::generate::MergeMeshes<Vec1Types_>>()
    .add<sofa::component::engine::generate::MergeMeshes<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Merge 2 coordinate vectors.)")
    .add<sofa::component::engine::generate::MergePoints<Vec2Types_>>()
    .add<sofa::component::engine::generate::MergePoints<Rigid2Types_>>()
    .add<sofa::component::engine::generate::MergePoints<Vec3Types_>>()
    .add<sofa::component::engine::generate::MergePoints<Vec1Types_>>()
    .add<sofa::component::engine::generate::MergePoints<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mechanical mapping between a set of mesh primitives (point, edge, triangle...) and a set of points generated by Mesh2PointTopologicalMapping.)")
    .add<sofa::component::mapping::linear::Mesh2PointMechanicalMapping<Vec3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine mapping a set of points in a topological model and provide barycentric coordinates)")
    .add<sofa::component::engine::generate::MeshBarycentricMapperEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Close a given mesh.)")
    .add<sofa::component::engine::generate::MeshClosingEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute a mass matrix resulting from the space integration of a density over a domain.)")
    .add<sofa::component::mass::MeshMatrixMass<Vec1Types_, Vec3Types_>>()
    .add<sofa::component::mass::MeshMatrixMass<Vec2Types_, Vec3Types_>>()
    .add<sofa::component::mass::MeshMatrixMass<Vec3Types_, Vec3Types_>>()
    .add<sofa::component::mass::MeshMatrixMass<Vec1Types_, Vec2Types_>>()
    .add<sofa::component::mass::MeshMatrixMass<Vec1Types_, Vec1Types_>>()
    .add<sofa::component::mass::MeshMatrixMass<Vec2Types_, Vec2Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Find the primitives (vertex/edge/triangle/tetrahedron) inside a given mesh.)")
    .add<sofa::component::engine::select::MeshROI<Vec6Types_>>()
    .add<sofa::component::engine::select::MeshROI<Vec3Types_>>()
    .add<sofa::component::engine::select::MeshROI<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Select uniformly distributed points on a mesh based on Euclidean or Geodesic distance measure.)")
    .add<sofa::component::engine::select::MeshSampler<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine breaking a mesh in multiple parts, based on selected vertices or cells.)")
    .add<sofa::component::engine::select::MeshSplittingEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Spring force field acting along the edges of a mesh.)")
    .add<sofa::component::solidmechanics::spring::MeshSpringForceField<Vec3Types_>>()
    .add<sofa::component::solidmechanics::spring::MeshSpringForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::spring::MeshSpringForceField<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Extract a mesh subset based on selected vertices.)")
    .add<sofa::component::engine::select::MeshSubsetEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Attach given pair of particles, projecting the positions of the second particles to the first ones.)")
    .add<sofa::component::engine::select::NearestPointROI<Vec2Types_>>()
    .add<sofa::component::engine::select::NearestPointROI<Rigid2Types_>>()
    .add<sofa::component::engine::select::NearestPointROI<Vec6Types_>>()
    .add<sofa::component::engine::select::NearestPointROI<Vec3Types_>>()
    .add<sofa::component::engine::select::NearestPointROI<Vec1Types_>>()
    .add<sofa::component::engine::select::NearestPointROI<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Non uniform Hexahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::nonuniform::NonUniformHexahedralFEMForceFieldAndMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Non uniform Hexahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::nonuniform::NonUniformHexahedronFEMForceFieldAndMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Convert Vec in Real)")
    .add<sofa::component::engine::generate::NormEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute vertex normals by averaging face normals.)")
    .add<sofa::component::engine::generate::NormalsFromPoints<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Null force feedback for haptic feedback device.)")
    .add<sofa::component::haptics::NullForceFeedbackT<Vec1Types_>>()
    .add<sofa::component::haptics::NullForceFeedbackT<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(OscillatingTorsionPressure.)")
    .add<sofa::component::mechanicalload::OscillatingTorsionPressureForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Apply a sinusoidal trajectory to given points.)")
    .add<sofa::component::constraint::projective::OscillatorProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::OscillatorProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Find all the points located between two boxes.)")
    .add<sofa::component::engine::select::PairBoxROI<Vec6Types_>>()
    .add<sofa::component::engine::select::PairBoxROI<Vec3Types_>>()
    .add<sofa::component::engine::select::PairBoxROI<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Apply a parabolic trajectory to given points.)")
    .add<sofa::component::constraint::projective::ParabolicProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::ParabolicProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Attach given particles to their initial positions, in some directions only.)")
    .add<sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Rigid2Types_>>()
    .add<sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::PartialFixedProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Impose a motion to given DOFs (translation and rotation) in some directions only.)")
    .add<sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::PartialLinearMovementProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Impose a motion to all the boundary points of a mesh.)")
    .add<sofa::component::constraint::projective::PatchTestMovementProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::PatchTestMovementProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Contact using repulsive springs.)")
    .add<sofa::component::collision::response::contact::PenalityContactForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Repulsion along the normal to a plane.)")
    .add<sofa::component::mechanicalload::PlaneForceField<Vec2Types_>>()
    .add<sofa::component::mechanicalload::PlaneForceField<Vec6Types_>>()
    .add<sofa::component::mechanicalload::PlaneForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::PlaneForceField<Vec1Types_>>()
    .add<sofa::component::mechanicalload::PlaneForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Project particles to an affine plane.)")
    .add<sofa::component::constraint::projective::PlaneProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::PlaneProjectiveConstraint<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Find the primitives inside a given plane.)")
    .add<sofa::component::engine::select::PlaneROI<Vec3Types_>>()
    .add<sofa::component::engine::select::PlaneROI<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Collision model which represents a set of points.)")
    .add<sofa::component::collision::geometry::PointCollisionModel<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Project particles to a point)")
    .add<sofa::component::constraint::projective::PointProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::PointProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::PointProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::PointProjectiveConstraint<Vec6Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Geometry algorithms dedicated to a point topology.)")
    .add<sofa::component::topology::container::dynamic::PointSetGeometryAlgorithms<Vec3Types_>>()
    .add<sofa::component::topology::container::dynamic::PointSetGeometryAlgorithms<Vec2Types_>>()
    .add<sofa::component::topology::container::dynamic::PointSetGeometryAlgorithms<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Find the points given a list of indices.)")
    .add<sofa::component::engine::select::PointsFromIndices<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Simple elastic springs applied to given degrees of freedom between their current and rest shape position.)")
    .add<sofa::component::solidmechanics::spring::PolynomialRestShapeSpringsForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Simple elastic springs applied to given degrees of freedom between their current and rest shape position.)")
    .add<sofa::component::solidmechanics::spring::PolynomialSpringsForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Position-based dynamics)")
    .add<sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec2Types_>>()
    .add<sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec6Types_>>()
    .add<sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Vec1Types_>>()
    .add<sofa::component::constraint::projective::PositionBasedDynamicsProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Component precomputing constraint forces within a simulated body using the compliance method. It approximates the compliance matrix by a precomputed matrix inverse. The approximation can be updated based on the rotation of elements.)")
    .add<sofa::component::constraint::lagrangian::correction::PrecomputedConstraintCorrection<Vec3Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::PrecomputedConstraintCorrection<Vec1Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::PrecomputedConstraintCorrection<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear prisms using the corotational approach)")
    .add<sofa::component::solidmechanics::fem::elastic::PrismCorotationalFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Finite-element mass (inertia and body force) defined on prisms)")
    .add<sofa::component::mass::PrismFEMMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear prisms assuming small strain)")
    .add<sofa::component::solidmechanics::fem::elastic::PrismLinearSmallStrainFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Project the position of 3d points onto a plane according to a projection matrix.)")
    .add<sofa::component::engine::transform::ProjectiveTransformEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Find the N closest primitives from a given position.)")
    .add<sofa::component::engine::select::ProximityROI<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Bending Quad finite elements)")
    .add<sofa::component::solidmechanics::fem::elastic::QuadBendingFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs added to a quad mesh to prevent bending.)")
    .add<sofa::component::solidmechanics::spring::QuadBendingSprings<Vec2Types_>>()
    .add<sofa::component::solidmechanics::spring::QuadBendingSprings<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear quads using the corotational approach)")
    .add<sofa::component::solidmechanics::fem::elastic::QuadCorotationalFEMForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::fem::elastic::QuadCorotationalFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Finite-element mass (inertia and body force) defined on quads)")
    .add<sofa::component::mass::QuadFEMMass<Vec2Types_>>()
    .add<sofa::component::mass::QuadFEMMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear quads assuming small strain)")
    .add<sofa::component::solidmechanics::fem::elastic::QuadLinearSmallStrainFEMForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::fem::elastic::QuadLinearSmallStrainFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Pressure applied on a quadrangular geometry.)")
    .add<sofa::component::mechanicalload::QuadPressureForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Geometry algorithms dedicated to a quad topology.)")
    .add<sofa::component::topology::container::dynamic::QuadSetGeometryAlgorithms<Vec2Types_>>()
    .add<sofa::component::topology::container::dynamic::QuadSetGeometryAlgorithms<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs added to a quad mesh to prevent bending.)")
    .add<sofa::component::solidmechanics::spring::QuadularBendingSprings<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Transform a vector of Rigids into two independent vectors for positions (Vec3) and orientations (Quat).)")
    .add<sofa::component::engine::transform::QuatToRigidEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine distributing points over a surface randomly.)")
    .add<sofa::component::engine::generate::RandomPointDistributionInSurface<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Spring acting on the edges and faces of a regular grid.)")
    .add<sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec3Types_>>()
    .add<sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec1Types_>>()
    .add<sofa::component::solidmechanics::spring::RegularGridSpringForceField<Vec6Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs which only repel.)")
    .add<sofa::component::solidmechanics::spring::RepulsiveSpringForceField<Vec3Types_>>()
    .add<sofa::component::solidmechanics::spring::RepulsiveSpringForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::spring::RepulsiveSpringForceField<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Elastic springs generating forces on degrees of freedom between their current and rest shape position.)")
    .add<sofa::component::solidmechanics::spring::RestShapeSpringsForceField<Vec3Types_>>()
    .add<sofa::component::solidmechanics::spring::RestShapeSpringsForceField<Vec1Types_>>()
    .add<sofa::component::solidmechanics::spring::RestShapeSpringsForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Set the positions and velocities of points attached to a rigid parent.)")
    .add<sofa::component::mapping::nonlinear::RigidMapping<Rigid2Types_, Vec2Types_>>()
    .add<sofa::component::mapping::nonlinear::RigidMapping<Rigid3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::nonlinear::RigidMapping<Rigid3Types_, Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Transform a couple of Vec3 and Quaternion in Rigid.)")
    .add<sofa::component::engine::transform::RigidToQuatEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute target positions using shape matching deformation method by Mueller et al.)")
    .add<sofa::component::engine::analyze::ShapeMatching<Vec3Types_>>()
    .add<sofa::component::engine::analyze::ShapeMatching<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mechanical mapping between two TetrahedronSetTopologies generated by SimpleTesselatedTetraTopologicalMapping.)")
    .add<sofa::component::mapping::linear::SimpleTesselatedTetraMechanicalMapping<Vec3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Animate a skeleton.)")
    .add<sofa::component::constraint::projective::SkeletalMotionProjectiveConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Skin a model from a set of rigid DOFs.)")
    .add<sofa::component::mapping::linear::SkinningMapping<Rigid3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Lagrangian-based partial fixation of DOFs of the model, along an axis.)")
    .add<sofa::component::constraint::lagrangian::model::SlidingLagrangianConstraint<Vec3Types_>>()
    .add<sofa::component::constraint::lagrangian::model::SlidingLagrangianConstraint<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute the laplacian smoothing of a mesh.)")
    .add<sofa::component::engine::transform::SmoothMeshEngine<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Collision model which represents a set of Spheres.)")
    .add<sofa::component::collision::geometry::SphereCollisionModel<Vec3Types_>>()
    .add<sofa::component::collision::geometry::SphereCollisionModel<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Outward repulsion applied by a sphere geometry)")
    .add<sofa::component::mechanicalload::SphereForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::SphereForceField<Vec2Types_>>()
    .add<sofa::component::mechanicalload::SphereForceField<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine selecting the primitives (vertex/edge/triangle/tetrahedron) inside a given sphere.)")
    .add<sofa::component::engine::select::SphereROI<Vec3Types_>>()
    .add<sofa::component::engine::select::SphereROI<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine turning on spiral any topological model.)")
    .add<sofa::component::engine::generate::Spiral<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(A spring-based force field between two mechanical states, applying Hookean elastic forces with damping.)")
    .add<sofa::component::solidmechanics::spring::SpringForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::spring::SpringForceField<Vec6Types_>>()
    .add<sofa::component::solidmechanics::spring::SpringForceField<Vec3Types_>>()
    .add<sofa::component::solidmechanics::spring::SpringForceField<Vec1Types_>>()
    .add<sofa::component::solidmechanics::spring::SpringForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping point positions to square distances.)")
    .add<sofa::component::mapping::nonlinear::SquareDistanceMapping<Vec3Types_, Vec1Types_>>()
    .add<sofa::component::mapping::nonlinear::SquareDistanceMapping<Rigid3Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute the square value from the inputs.)")
    .add<sofa::component::mapping::nonlinear::SquareMapping<Vec1Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Generic Tetrahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::hyperelastic::StandardTetrahedralFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Lagrangian-based constraint forcing a 1D DoF to be  inside a given range.)")
    .add<sofa::component::constraint::lagrangian::model::StopperLagrangianConstraint<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute a subset of input DOFs.)")
    .add<sofa::component::mapping::linear::SubsetMapping<Rigid3Types_, Rigid3Types_>>()
    .add<sofa::component::mapping::linear::SubsetMapping<Vec3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::SubsetMapping<Vec1Types_, Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute a subset of the input MechanicalObjects according to a dof index list.)")
    .add<sofa::component::mapping::linear::SubsetMultiMapping<Rigid3Types_, Rigid3Types_>>()
    .add<sofa::component::mapping::linear::SubsetMultiMapping<Vec3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::SubsetMultiMapping<Rigid3Types_, Vec3Types_>>()
    .add<sofa::component::mapping::linear::SubsetMultiMapping<Vec1Types_, Vec1Types_>>()
    .add<sofa::component::mapping::linear::SubsetMultiMapping<Vec2Types_, Vec2Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine used to create subset topology given box, sphere, plan, ...)")
    .add<sofa::component::engine::select::SubsetTopology<Vec3Types_>>()
    .add<sofa::component::engine::select::SubsetTopology<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Computing the sum between two vector of dofs.)")
    .add<sofa::component::engine::analyze::SumEngine<Vec3Types_>>()
    .add<sofa::component::engine::analyze::SumEngine<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Pressure applied on a generic surface (triangular or quadrangular).)")
    .add<sofa::component::mechanicalload::SurfacePressureForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::SurfacePressureForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(This component computes the volume enclosed by a surface mesh and apply a pressure force following Tait's equation: $P = P_0 - B((V/V_0)^\gamma - 1)$.
This ForceField can be used to apply :
 * a constant pressure (set $B=0$ and use $P_0$)
 * an ideal gas pressure (set $\gamma=1$ and use $B$)
 * a pressure from water (set $\gamma=7$ and use $B$))")
    .add<sofa::component::mechanicalload::TaitSurfacePressureForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Corotational FEM Tetrahedral finite elements)")
    .add<sofa::component::solidmechanics::fem::elastic::TetrahedralCorotationalFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Linear Elastic Tetrahedral Mesh)")
    .add<sofa::component::solidmechanics::tensormass::TetrahedralTensorMassForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear tetrahedra using the corotational approach)")
    .add<sofa::component::solidmechanics::fem::elastic::TetrahedronCorotationalFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Isotropic or anisotropic diffusion on Tetrahedral Meshes.)")
    .add<sofa::component::diffusion::TetrahedronDiffusionFEMForceField<Vec3Types_>>()
    .add<sofa::component::diffusion::TetrahedronDiffusionFEMForceField<Vec2Types_>>()
    .add<sofa::component::diffusion::TetrahedronDiffusionFEMForceField<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Tetrahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::elastic::TetrahedronFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Finite-element mass (inertia and body force) defined on tetrahedra)")
    .add<sofa::component::mass::TetrahedronFEMMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Generic Hyperelastic Tetrahedral finite elements.)")
    .add<sofa::component::solidmechanics::fem::hyperelastic::TetrahedronHyperelasticityFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear tetrahedra assuming small strain)")
    .add<sofa::component::solidmechanics::fem::elastic::TetrahedronLinearSmallStrainFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Geometry algorithms dedicated to a tetrahedral topology.)")
    .add<sofa::component::topology::container::dynamic::TetrahedronSetGeometryAlgorithms<Vec2Types_>>()
    .add<sofa::component::topology::container::dynamic::TetrahedronSetGeometryAlgorithms<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Component removing all elements going outside from the given bounding box.)")
    .add<sofa::component::topology::utility::TopologyBoundingTrasher<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Applies a torque to specified degrees of freedom.)")
    .add<sofa::component::mechanicalload::TorsionForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::TorsionForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Render a trail behind particles.)")
    .add<sofa::component::visual::TrailRenderer<Vec3Types_>>()
    .add<sofa::component::visual::TrailRenderer<Vec2Types_>>()
    .add<sofa::component::visual::TrailRenderer<Vec1Types_>>()
    .add<sofa::component::visual::TrailRenderer<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Engine applying a transformation on 3d points (translation / rotation).)")
    .add<sofa::component::engine::transform::TransformEngine<Vec2Types_>>()
    .add<sofa::component::engine::transform::TransformEngine<Rigid2Types_>>()
    .add<sofa::component::engine::transform::TransformEngine<Vec3Types_>>()
    .add<sofa::component::engine::transform::TransformEngine<Vec1Types_>>()
    .add<sofa::component::engine::transform::TransformEngine<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Transform position of 3d points.)")
    .add<sofa::component::engine::transform::TransformPosition<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs added to a triangular mesh to prevent bending.)")
    .add<sofa::component::solidmechanics::spring::TriangleBendingSprings<Vec2Types_>>()
    .add<sofa::component::solidmechanics::spring::TriangleBendingSprings<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Collision model using a triangular mesh, as described in BaseMeshTopology.)")
    .add<sofa::component::collision::geometry::TriangleCollisionModel<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear triangles using the corotational approach)")
    .add<sofa::component::solidmechanics::fem::elastic::TriangleCorotationalFEMForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::fem::elastic::TriangleCorotationalFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Triangular finite elements for static topology.)")
    .add<sofa::component::solidmechanics::fem::elastic::TriangleFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Finite-element mass (inertia and body force) defined on triangles)")
    .add<sofa::component::mass::TriangleFEMMass<Vec2Types_>>()
    .add<sofa::component::mass::TriangleFEMMass<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Hooke's law on linear triangles assuming small strain)")
    .add<sofa::component::solidmechanics::fem::elastic::TriangleLinearSmallStrainFEMForceField<Vec2Types_>>()
    .add<sofa::component::solidmechanics::fem::elastic::TriangleLinearSmallStrainFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Pressure applied on a triangular geometry.)")
    .add<sofa::component::mechanicalload::TrianglePressureForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Geometry algorithms dedicated to a triangular topology.)")
    .add<sofa::component::topology::container::dynamic::TriangleSetGeometryAlgorithms<Vec2Types_>>()
    .add<sofa::component::topology::container::dynamic::TriangleSetGeometryAlgorithms<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Triangular finite element model using anisotropic material.)")
    .add<sofa::component::solidmechanics::fem::elastic::TriangularAnisotropicFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Springs added to a triangular mesh to prevent bending)")
    .add<sofa::component::solidmechanics::spring::TriangularBendingSprings<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Biquadratic Springs on a Triangular Mesh.)")
    .add<sofa::component::solidmechanics::spring::TriangularBiquadraticSpringsForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Corotational Triangular finite elements for dynamic topology.)")
    .add<sofa::component::solidmechanics::fem::elastic::TriangularFEMForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Corotational Triangular finite elements.)")
    .add<sofa::component::solidmechanics::fem::elastic::TriangularFEMForceFieldOptim<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Quadratic Springs on a Triangular Mesh.)")
    .add<sofa::component::solidmechanics::spring::TriangularQuadraticSpringsForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Linear Elastic Membrane on a Triangular Mesh)")
    .add<sofa::component::solidmechanics::tensormass::TriangularTensorMassForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Create a Tube around rigid points.)")
    .add<sofa::component::mapping::linear::TubularMapping<Rigid3Types_, Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Component computing constraint forces within a simulated body using the compliance method, approximating the compliance matrix by a diagonal matrix.)")
    .add<sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Vec3Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Vec2Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Vec1Types_>>()
    .add<sofa::component::constraint::lagrangian::correction::UncoupledConstraintCorrection<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(A constraint equation applied on all dofs.)")
    .add<sofa::component::constraint::lagrangian::model::UniformLagrangianConstraint<Vec1Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Compute a mass equally spread over the number of nodes.)")
    .add<sofa::component::mass::UniformMass<Vec2Types_>>()
    .add<sofa::component::mass::UniformMass<Rigid2Types_>>()
    .add<sofa::component::mass::UniformMass<Vec6Types_>>()
    .add<sofa::component::mass::UniformMass<Vec3Types_>>()
    .add<sofa::component::mass::UniformMass<Vec1Types_>>()
    .add<sofa::component::mass::UniformMass<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Uniform velocity damping.)")
    .add<sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec2Types_>>()
    .add<sofa::component::mechanicalload::UniformVelocityDampingForceField<Rigid2Types_>>()
    .add<sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec6Types_>>()
    .add<sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec3Types_>>()
    .add<sofa::component::mechanicalload::UniformVelocityDampingForceField<Vec1Types_>>()
    .add<sofa::component::mechanicalload::UniformVelocityDampingForceField<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Lagrangian-based inequality constraint)")
    .add<sofa::component::constraint::lagrangian::model::UnilateralLagrangianConstraint<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Find the values given a list of indices.)")
    .add<sofa::component::engine::select::ValuesFromIndices<Vec2Types_>>()
    .add<sofa::component::engine::select::ValuesFromIndices<Vec6Types_>>()
    .add<sofa::component::engine::select::ValuesFromIndices<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Assign values to primitives (vertex/edge/triangle/tetrahedron) based on a linear interpolation of values along a direction.)")
    .add<sofa::component::engine::select::ValuesFromPositions<Vec3Types_>>()
    .add<sofa::component::engine::select::ValuesFromPositions<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Spring force field acting along the edges of a mesh.)")
    .add<sofa::component::solidmechanics::spring::VectorSpringForceField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Return a rigid position from the vertices, texCoords, normals and facets of any mesh.)")
    .add<sofa::component::engine::transform::Vertex2Frame<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Generic visual model. If a viewer is active it will replace the VisualModel alias, otherwise nothing will be displayed.)")
    .add<sofa::component::visual::VisualModelImpl<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Render a point cloud.)")
    .add<sofa::component::visual::VisualPointCloud<Vec3Types_>>()
    .add<sofa::component::visual::VisualPointCloud<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Render a vector field.)")
    .add<sofa::component::visual::VisualVectorField<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(This component computes the volume of a given volumetric mesh.)")
    .add<sofa::component::engine::generate::VolumeFromTetrahedrons<Vec3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(This component computes the volume of a given closed surfacic mesh.)")
    .add<sofa::component::engine::generate::VolumeFromTriangles<Vec3Types_>>()
    .add<sofa::component::engine::generate::VolumeFromTriangles<Rigid3Types_>>()
);

factory->registerObjects(sofa::core::ObjectRegistrationData(R"(Mapping each tetrahedron in a topology to a scalar value representing its volume.)")
    .add<sofa::component::mapping::nonlinear::VolumeMapping<Vec3Types_, Vec1Types_>>()
);


}
}
    