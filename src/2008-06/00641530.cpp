// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_characterocclusionearlyexit53aa06fb93cb2f80.cpp

// Candidate translation unit (score above; library headers required).
#include "v8datamodel/ICharacterSubject.h"
#include "v8world/ContactManager.h"
#include "v8world/Primitive.h"
namespace RBX {
class FilterCharacterOcclusion: public HitTestFilter {public: FilterCharacterOcclusion(int); virtual Result filterResult(const Primitive*) const;};
	//98.58% match
	bool ICharacterSubject::testOcclusion(const G3D::CoordinateFrame& cameraFocus, const G3D::CoordinateFrame& cameraGoal, float& distance)
	{
		ContactManager* contactManager = getContactManager();
		if (!contactManager) return false;
		{
			std::vector<const Primitive*> ignorePrims;
			getIgnorePrims(ignorePrims);

			G3D::CoordinateFrame manLookCamera = getFocusLookingAtGoal(cameraFocus, cameraGoal);
			G3D::Vector3 pointOnMan = manLookCamera.leftVector();

			int hits = 0;
			float originalDistance = (cameraGoal.translation - cameraFocus.translation).magnitude();
			distance = originalDistance;

			FilterCharacterOcclusion filter(0);
			for (int x = -2; x <= 2; x += 2)
			{
				G3D::Vector3 r = manLookCamera.translation + pointOnMan * (float)x;
				G3D::Ray manToCamera = G3D::Ray::fromOriginAndDirection(r, cameraGoal.translation - r);

				G3D::Vector3 hitPoint;
				if (contactManager->getHit(manToCamera, &ignorePrims, &filter, hitPoint))
				{
					hits++;
					float thisDistance = (hitPoint - r).magnitude();
					distance = G3D::min(distance, thisDistance);
				}
			}

			if (hits > 1)
			{
				distance -= 1.0f;
				distance = G3D::max(distance, 0.5f);
				distance = G3D::min(distance, 1000.0f);
				return true;
			}
			else
			{
				distance = originalDistance;
				return false;
			}
		}

	}


}
