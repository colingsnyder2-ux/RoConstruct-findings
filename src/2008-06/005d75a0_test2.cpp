// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: ogre-1.4.5 roc_unit_766a26f5586f8ca5.cpp

// Candidate translation unit (score above; library headers required).
// Binary-inferred MovablePlane layout for Roblox fork
// Target: 005d75a0 (scalar deleting destructor, 151 bytes)
// Evidence: SEH frame, std::string members, vtable at offset 0, additional members vs authentic Ogre 1.4.5

#define OGRE_STATIC_LIB
#undef OGRE_NONCLIENT_BUILD
#include <OgrePlane.h>
#include <OgreMovableObject.h>
#include <OgreAxisAlignedBox.h>
#include <OgreQuaternion.h>
#include <OgreString.h>
#include <OgreNode.h>

namespace Ogre {
    // Roblox fork adds std::string members not in authentic Ogre 1.4.5
    class MovablePlane : public Plane, public MovableObject {
    protected:
        mutable Plane mDerivedPlane;          // +0x4C (after MovableObject)
        mutable Vector3 mLastTranslate;       // +0x5C
        mutable Quaternion mLastRotate;       // +0x68
        AxisAlignedBox mNullBB;               // +0x78
        mutable bool mDirty;                  // +0x98
        // Roblox additions:
        String mName;                         // +0x9C (std::string, 28 bytes)
        String mMeshName;                     // +0xB8 (std::string, 28 bytes)
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

    // Out-of-line destructor definition - emits scalar deleting destructor with SEH frame
    MovablePlane::~MovablePlane() {
        // Base and member destructors called automatically
    }
}