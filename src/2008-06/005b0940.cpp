// from server: 100% by tester
// roc 2008-06 005b0940  unit: RBX::Accoutrement  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0940
//
// 005b0940  8b442404             mov eax, dword ptr [esp + 4]
// 005b0944  d9817c010000         fld dword ptr [ecx + 0x17c]
// 005b094a  d918                 fstp dword ptr [eax]
// 005b094c  d98180010000         fld dword ptr [ecx + 0x180]
// 005b0952  d95804               fstp dword ptr [eax + 4]
// 005b0955  d98184010000         fld dword ptr [ecx + 0x184]
// 005b095b  d95808               fstp dword ptr [eax + 8]
// 005b095e  c20400               ret 4

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
