// from server: 80% by colin
// roc 2007-08 005a8290  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8290
//
// 005a8290  d98158010000         fld dword ptr [ecx + 0x158]
// 005a8296  8b542404             mov edx, dword ptr [esp + 4]
// 005a829a  d81a                 fcomp dword ptr [edx]
// 005a829c  dfe0                 fnstsw ax
// 005a829e  f6c444               test ah, 0x44
// 005a82a1  7a20                 jp 0x5a82c3
// 005a82a3  d9815c010000         fld dword ptr [ecx + 0x15c]
// 005a82a9  d85a04               fcomp dword ptr [edx + 4]
// 005a82ac  dfe0                 fnstsw ax
// 005a82ae  f6c444               test ah, 0x44
// 005a82b1  7a10                 jp 0x5a82c3
// 005a82b3  d98160010000         fld dword ptr [ecx + 0x160]
// 005a82b9  d85a08               fcomp dword ptr [edx + 8]
// 005a82bc  dfe0                 fnstsw ax
// 005a82be  f6c444               test ah, 0x44
// 005a82c1  7b27                 jnp 0x5a82ea
// 005a82c3  d902                 fld dword ptr [edx]
// 005a82c5  c7442404b0588c00     mov dword ptr [esp + 4], 0x8c58b0
// 005a82cd  d99958010000         fstp dword ptr [ecx + 0x158]
// 005a82d3  d94204               fld dword ptr [edx + 4]
// 005a82d6  d9995c010000         fstp dword ptr [ecx + 0x15c]
// 005a82dc  d94208               fld dword ptr [edx + 8]
// 005a82df  d99960010000         fstp dword ptr [ecx + 0x160]
// 005a82e5  e926c4e9ff           jmp 0x444710
// 005a82ea  c20400               ret 4

struct VHumanoidBoundFuncDesc
{
    char pad[0x158];
    float x;
    float y;
    float z;
    void setValue(const float* v);
};

void VHumanoidBoundFuncDesc::setValue(const float* v)
{
    if (x != v[0] || y != v[1] || z != v[2])
    {
        x = v[0];
        y = v[1];
        z = v[2];
        extern void __cdecl sub_00444710();
        sub_00444710();
    }
}
