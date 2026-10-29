// roc 2010-06 006f7040  unit: CXTPToolBar::CControlButtonExpand  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7040
//
// 006f7040  8b442404             mov eax, dword ptr [esp + 4]
// 006f7044  d9817c010000         fld dword ptr [ecx + 0x17c]
// 006f704a  d918                 fstp dword ptr [eax]
// 006f704c  d98180010000         fld dword ptr [ecx + 0x180]
// 006f7052  d95804               fstp dword ptr [eax + 4]
// 006f7055  d98184010000         fld dword ptr [ecx + 0x184]
// 006f705b  d95808               fstp dword ptr [eax + 8]
// 006f705e  c20400               ret 4
// copied from an identical function in another client (function ?getAttachmentPos@Accoutrement@RBX@@QBE?BVVector3@G3D@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
namespace G3D {
class Vector3
{
public:
    float x, y, z;

    Vector3(const Vector3& V) : x(V.x), y(V.y), z(V.z) {}
};

class Matrix3
{
    float elt[3][3];
};

class CoordinateFrame
{
public:
    Matrix3 rotation;
    Vector3 translation;
};
}

namespace RBX {
class Accoutrement
{
    char gap0[0x158];
    G3D::CoordinateFrame attachmentPoint;
public:
    const G3D::Vector3 getAttachmentPos() const;
};

const G3D::Vector3 Accoutrement::getAttachmentPos() const
{
    return attachmentPoint.translation;
}
}