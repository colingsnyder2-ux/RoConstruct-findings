// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: ogre-1.4.5 roc_unit_add4924e9543aac2.cpp

// Candidate translation unit (score above; library headers required).
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
#define OGRE_STATIC_LIB
#undef OGRE_NONCLIENT_BUILD
#include <OgrePlane.h>
#include <OgreMovableObject.h>
#include <OgreAxisAlignedBox.h>
#include <OgreQuaternion.h>
#include <OgreString.h>
#include <OgreNode.h>

namespace Ogre {
    // Declare MovablePlane with exact layout from header
    class MovablePlane : public Plane, public MovableObject {
    protected:
        mutable Plane mDerivedPlane;
        mutable Vector3 mLastTranslate;
        mutable Quaternion mLastRotate;
        AxisAlignedBox mNullBB;
        mutable bool mDirty;
        static String msMovableType;
    public:
        MovablePlane(const String& name);
        MovablePlane(const Plane& rhs);
        MovablePlane(const Vector3& rkNormal, Real fConstant);
        MovablePlane(const Vector3& rkNormal, const Vector3& rkPoint);
        MovablePlane(const Vector3& rkPoint0, const Vector3& rkPoint1, const Vector3& rkPoint2);
        virtual ~MovablePlane();
        void _notifyCurrentCamera(Camera*) { }
        const AxisAlignedBox& getBoundingBox(void) const { return mNullBB; }
        Real getBoundingRadius(void) const { return Math::POS_INFINITY; }
        void _updateRenderQueue(RenderQueue*) { }
        const String& getMovableType(void) const;
        const Plane& _getDerivedPlane(void) const;
    };

    // Define destructor out-of-line - this should emit base/member destructor calls
    // and the scalar deleting destructor
    MovablePlane::~MovablePlane() {
    }
}