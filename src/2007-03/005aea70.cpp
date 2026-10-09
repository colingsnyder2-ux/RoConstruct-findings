// roc 2007-03 005aea70  unit: seg_005a0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005aea70
//
// 005aea70  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005aea73  85c0                 test eax, eax
// 005aea75  7404                 je 0x5aea7b
// 005aea77  8b4020               mov eax, dword ptr [eax + 0x20]
// 005aea7a  c3                   ret 
// 005aea7b  33c0                 xor eax, eax
// 005aea7d  c3                   ret 
// copied from an identical function in another client (function ?getBulletCollisionObject@Geometry@ns_ROCX000019@@QAEPAU12@XZ)

namespace ns_ROCX000019 {
struct Geometry {
    char pad[0x20];
    Geometry* bulletCollisionObject;
    Geometry* getBulletCollisionObject();
};

Geometry* Geometry::getBulletCollisionObject()
{
    Geometry* p = bulletCollisionObject;
    if (p)
        return p->bulletCollisionObject;
    return 0;
}
}
