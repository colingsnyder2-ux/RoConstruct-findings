// from server: 72% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_rotatejoint_native_cross_face_5e58a755b817a936.cpp

// Candidate translation unit (score above; library headers required).
// Native6461af uses face1 with center0;6461ce uses face0 with center1.
// Each axle center must fit inside the OTHER face extrusion.
#include <v8world/RotateJoint.h>
#include <v8world/Primitive.h>
#include <v8world/Tolerance.h>
#include <util/Math.h>
namespace RBX {
	RotateJoint* RotateJoint::canBuildJoint(Primitive* p0, Primitive* p1, NormalId nId0, NormalId nId1)
	{
		SurfaceType s0 = p0->getSurfaceType(nId0);
		SurfaceType s1 = p1->getSurfaceType(nId1);
		if (!(s0 >= ROTATE || s1 >= ROTATE))
			return NULL;

		const G3D::CoordinateFrame& c0 = p0->getCoordinateFrame();
		const G3D::CoordinateFrame& c1 = p1->getCoordinateFrame();

		G3D::Vector3 n0 = Math::getWorldNormal(nId0, c0);
		G3D::Vector3 n1 = Math::getWorldNormal(nId1, c1);

		G3D::Vector3 holePtWorld = -n1;
		if (Math::angle(n0, holePtWorld) > 0.025f)
			return NULL;

		Face f0 = p0->getFaceInWorld(nId0);
		Face f1 = p1->getFaceInWorld(nId1);

		if (Face::hasOverlap(f0, f1, 0.35f) && Face::overlapWithinPlanes(f0, f1, 0.05f))
		{
			G3D::Vector3 center0 = f0.center();
			G3D::Vector3 center1 = f1.center();

			bool inExtrusion0 = f1.fuzzyContainsInExtrusion(center0, 0.05f);
			bool inExtrusion1 = f0.fuzzyContainsInExtrusion(center1, 0.05f);
			bool cond0 = s0 >= ROTATE && inExtrusion0;
			bool cond1 = s1 >= ROTATE && inExtrusion1;

			if (!cond0 && !cond1)
				return NULL;

			if (!cond0 || (cond1 && p0->getGridSize().sum() > p1->getGridSize().sum()))
			{
				std::swap(nId0, nId1);
				std::swap(s0, s1);
				std::swap(center0, center1);
				std::swap(n0, n1);
				std::swap(p0, p1);
			}

			G3D::CoordinateFrame axleInP0 = p0->getFaceCoordInObject(nId0);
			G3D::Vector3 axlePtWorld = p0->getCoordinateFrame().pointToWorldSpace(axleInP0.translation);
			G3D::Vector3 axlePtInP1 = p1->getCoordinateFrame().pointToObjectSpace(axlePtWorld);
			
			NormalId oppNId1 = normalIdOpposite(nId1);
			G3D::Vector3 byAtLeast = Math::toGrid(axlePtInP1, 0.1f);

			G3D::CoordinateFrame holeInP1(normalIdToMatrix3(oppNId1), byAtLeast);
			G3D::Vector3 holePtWorld = p1->getCoordinateFrame().pointToWorldSpace(holeInP1.translation);
			if (!Tolerance::pointsUnaligned(axlePtWorld, holePtWorld))
			{
				for (int i = 0; i < 2; i++)
				{
					float multiplier = i == 0 ? 1.0f : -1.0f;

					G3D::Vector3 ref0 = axlePtWorld - n0 * multiplier;
					G3D::Vector3 ref1 = holePtWorld + n1 * multiplier;
					if (Tolerance::pointsUnaligned(ref0, ref1))
						return NULL;
				}

				return surfaceTypeToJoint(s0, p0, p1, axleInP0, holeInP1);
			}
		}

		return NULL;
	}


}
