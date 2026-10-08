// from server: 100% by colin
// roc 2007-08 005b4830  unit: RBX::Geometry  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4830
//
// 005b4830  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005b4833  85c0                 test eax, eax
// 005b4835  7404                 je 0x5b483b
// 005b4837  8b4020               mov eax, dword ptr [eax + 0x20]
// 005b483a  c3                   ret 
// 005b483b  33c0                 xor eax, eax
// 005b483d  c3                   ret 

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
