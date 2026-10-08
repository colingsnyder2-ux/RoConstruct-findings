// from server: 79% by colin
// roc 2007-08 005b4920  unit: RBX::Geometry  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4920
//
// 005b4920  d94178               fld dword ptr [ecx + 0x78]
// 005b4923  d9442404             fld dword ptr [esp + 4]
// 005b4927  dde1                 fucom st(1)
// 005b4929  dfe0                 fnstsw ax
// 005b492b  ddd9                 fstp st(1)
// 005b492d  f6c444               test ah, 0x44
// 005b4930  7b15                 jnp 0x5b4947
// 005b4932  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005b4935  d95978               fstp dword ptr [ecx + 0x78]
// 005b4938  85c0                 test eax, eax
// 005b493a  740d                 je 0x5b4949
// 005b493c  894c2404             mov dword ptr [esp + 4], ecx
// 005b4940  8bc8                 mov ecx, eax
// 005b4942  e90947ffff           jmp 0x5a9050
// 005b4947  ddd8                 fstp st(0)
// 005b4949  c20400               ret 4

struct Geometry {
    char pad[0x1c];
    void* bulletCollisionObject;
    char pad2[0x78 - 0x20];
    float sizeZ;
    void setSizeZ(float z);
};

extern "C" void __stdcall func_005a9050(void*);

void Geometry::setSizeZ(float z)
{
    if (sizeZ != z) {
        sizeZ = z;
        if (bulletCollisionObject != 0) {
            func_005a9050(bulletCollisionObject);
        }
    }
}
