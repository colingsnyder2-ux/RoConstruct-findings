// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_block_best_plane_cc9edb62fb2058b0.cpp

// Candidate translation unit (score above; library headers required).
#include <v8world/Block.h>
#include <v8world/Edge.h>
#include <util/Math.h>
namespace RBX {
class Primitive;
class NativeBlockContact : public Edge { public: bool getBestPlaneEdge(float); };
extern int planeSeparationCount, planeOverlapCount;
// Native607357/607384: Primitive body+a0, geometry+9c; Body frame+94.
// Native607319/60739c/6074f0/607502: contact state58/5c/60/64/68.
static inline const G3D::CoordinateFrame& nativeFrame(Primitive* p) {
return *reinterpret_cast<const G3D::CoordinateFrame*>(*reinterpret_cast<char**>(reinterpret_cast<char*>(p)+0xa0)+0x94);
}
static inline Block* nativeBlock(Primitive* p) { return *reinterpret_cast<Block**>(reinterpret_cast<char*>(p)+0x9c); }
	bool NativeBlockContact::getBestPlaneEdge(float overlapIgnored)
	{
		int& separatingBodyId = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x58);
		bool& planeContact = *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + 0x5c);
		int& separatingAxisId = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x60);
		int* feature = reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64);
		float bestPlaneLength = Math::inf();
		float bestEdgeLength = Math::inf();
		float lastPlaneLength = Math::inf();
		int lastFeature[2] = {feature[0], feature[1]};
		bool checkLastFeature = (lastFeature[0] >= 0 && lastFeature[0] < 6) || (lastFeature[1] >= 0 && lastFeature[1] < 6);

		bool belowOverlap = false;

		for (int i = separatingBodyId; i < separatingBodyId + 2; i++)
		{
			int baseId = i % 2;
			int testId = (i + 1) % 2;

			const G3D::CoordinateFrame& primPV0 = nativeFrame(getPrimitive(baseId));
			const G3D::CoordinateFrame& primPV1 = nativeFrame(getPrimitive(testId));
			const G3D::Vector3* eBase = (const G3D::Vector3*)nativeBlock(getPrimitive(baseId))->getVertices();
			const G3D::Vector3* eTest = (const G3D::Vector3*)nativeBlock(getPrimitive(testId))->getVertices();

			G3D::Vector3 delta = primPV1.translation - primPV0.translation;

			G3D::Vector3 rotTransMul = delta * primPV0.rotation;

			for (int j = separatingAxisId; j < separatingAxisId + 3; j++)
			{
				int axisId = j % 3;

				float what = Math::taxiCabMagnitude(primPV0.rotation.getColumn(axisId) * primPV1.rotation * *eTest) + (*eBase)[axisId] - fabs(rotTransMul[axisId]);

				if (what > overlapIgnored)
				{
					if (checkLastFeature && lastFeature[baseId] % 3 == axisId )
						lastPlaneLength = what;

					if (what < bestPlaneLength)
					{
						bestPlaneLength = what;
						feature[baseId] = rotTransMul[axisId] > 0.0f ? axisId : axisId + 3;
						feature[testId] = -1;
						separatingBodyId = baseId;
						separatingAxisId = axisId;
						planeContact = true;
					}
				}
				else
				{
					separatingBodyId = baseId;
					separatingAxisId = axisId;
					belowOverlap = true;
					++planeSeparationCount;
				}

				if (belowOverlap)
					return false;
			}
		}

		++planeOverlapCount;
		if (checkLastFeature) 
		{
			if (feature[0] != lastFeature[0] || feature[1] != lastFeature[1]) 
			{
				if (!(bestPlaneLength * 1.01f < lastPlaneLength))
				{
					bestPlaneLength = lastPlaneLength;
					feature[0] = lastFeature[0];
					feature[1] = lastFeature[1];
				}
			}
		}
		const G3D::CoordinateFrame& primPV0 = nativeFrame(getPrimitive(0));
		const G3D::CoordinateFrame& primPV1 = nativeFrame(getPrimitive(1));
		const G3D::Vector3* e0 = (const G3D::Vector3*)nativeBlock(getPrimitive(0))->getVertices();
		const G3D::Vector3* e1 = (const G3D::Vector3*)nativeBlock(getPrimitive(1))->getVertices();

		G3D::Vector3 p0p1 = primPV1.translation - primPV0.translation;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				G3D::Vector3 crossAxis = primPV0.rotation.getColumn(i).cross(primPV1.rotation.getColumn(j));
				if (crossAxis.unitize() <= 0.001f)
					return planeContact;

				float p0p1inCrossAxis = crossAxis.dot(p0p1);

				G3D::Vector3 crossAxisMulPV0rot = crossAxis * primPV0.rotation;
				G3D::Vector3 crossAxisMulPV1rot = crossAxis * primPV1.rotation;

				float what = Math::taxiCabMagnitude(crossAxisMulPV0rot * *e0) + Math::taxiCabMagnitude(crossAxisMulPV1rot * *e1) - fabs(p0p1inCrossAxis);
				if (what > overlapIgnored)
				{
					if (what < bestEdgeLength)
					{
						bestEdgeLength = what;

						if ( what * 10.0f < bestPlaneLength )
						{
							if ( p0p1inCrossAxis > 0.0 )
							{
								feature[0] = nativeBlock(getPrimitive(0))->getClosestEdge(primPV0.rotation, (NormalId)i, crossAxis) + 6;
								feature[1] = nativeBlock(getPrimitive(1))->getClosestEdge(primPV1.rotation, (NormalId)j, -crossAxis) + 6;
							}
							else
							{
								feature[0] = nativeBlock(getPrimitive(0))->getClosestEdge(primPV0.rotation, (NormalId)i, -crossAxis) + 6;
								feature[1] = nativeBlock(getPrimitive(1))->getClosestEdge(primPV1.rotation, (NormalId)j, crossAxis) + 6;
							}
							planeContact = false;
						}
					}
				}
				else
				{
					 return false;
				}
			}
		}
		return true;
	}


}
