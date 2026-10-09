// from server: 80% by colin
// roc 2007-08 0057a590  unit: RBX::VSpecialShape::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a590
//
// 0057a590  8b542404             mov edx, dword ptr [esp + 4]
// 0057a594  d902                 fld dword ptr [edx]
// 0057a596  d899ec000000         fcomp dword ptr [ecx + 0xec]
// 0057a59c  dfe0                 fnstsw ax
// 0057a59e  f6c444               test ah, 0x44
// 0057a5a1  7a20                 jp 0x57a5c3
// 0057a5a3  d94204               fld dword ptr [edx + 4]
// 0057a5a6  d899f0000000         fcomp dword ptr [ecx + 0xf0]
// 0057a5ac  dfe0                 fnstsw ax
// 0057a5ae  f6c444               test ah, 0x44
// 0057a5b1  7a10                 jp 0x57a5c3
// 0057a5b3  d94208               fld dword ptr [edx + 8]
// 0057a5b6  d899f4000000         fcomp dword ptr [ecx + 0xf4]
// 0057a5bc  dfe0                 fnstsw ax
// 0057a5be  f6c444               test ah, 0x44
// 0057a5c1  7b27                 jnp 0x57a5ea
// 0057a5c3  d902                 fld dword ptr [edx]
// 0057a5c5  c7442404702e8c00     mov dword ptr [esp + 4], 0x8c2e70
// 0057a5cd  d999ec000000         fstp dword ptr [ecx + 0xec]
// 0057a5d3  d94204               fld dword ptr [edx + 4]
// 0057a5d6  d999f0000000         fstp dword ptr [ecx + 0xf0]
// 0057a5dc  d94208               fld dword ptr [edx + 8]
// 0057a5df  d999f4000000         fstp dword ptr [ecx + 0xf4]
// 0057a5e5  e926a1ecff           jmp 0x444710
// 0057a5ea  c20400               ret 4

struct RBX_VSpecialShape_FactoryProduct {
    char pad[0xec];
    float field_ec;
    float field_f0;
    float field_f4;
    void update(const float* src);
};

void RBX_VSpecialShape_FactoryProduct::update(const float* src) {
    if (src[0] == field_ec && src[1] == field_f0 && src[2] == field_f4)
        return;
    field_ec = src[0];
    field_f0 = src[1];
    field_f4 = src[2];
    extern void someFunc();
    someFunc();
}
