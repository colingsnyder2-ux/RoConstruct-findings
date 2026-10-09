// from server: 81% by colin
// roc 2007-08 0057a5f0  unit: RBX::VSpecialShape::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a5f0
//
// 0057a5f0  8b542404             mov edx, dword ptr [esp + 4]
// 0057a5f4  d902                 fld dword ptr [edx]
// 0057a5f6  d89938010000         fcomp dword ptr [ecx + 0x138]
// 0057a5fc  dfe0                 fnstsw ax
// 0057a5fe  f6c444               test ah, 0x44
// 0057a601  7a20                 jp 0x57a623
// 0057a603  d94204               fld dword ptr [edx + 4]
// 0057a606  d8993c010000         fcomp dword ptr [ecx + 0x13c]
// 0057a60c  dfe0                 fnstsw ax
// 0057a60e  f6c444               test ah, 0x44
// 0057a611  7a10                 jp 0x57a623
// 0057a613  d94208               fld dword ptr [edx + 8]
// 0057a616  d89940010000         fcomp dword ptr [ecx + 0x140]
// 0057a61c  dfe0                 fnstsw ax
// 0057a61e  f6c444               test ah, 0x44
// 0057a621  7b27                 jnp 0x57a64a
// 0057a623  d902                 fld dword ptr [edx]
// 0057a625  c7442404ac2e8c00     mov dword ptr [esp + 4], 0x8c2eac
// 0057a62d  d99938010000         fstp dword ptr [ecx + 0x138]
// 0057a633  d94204               fld dword ptr [edx + 4]
// 0057a636  d9993c010000         fstp dword ptr [ecx + 0x13c]
// 0057a63c  d94208               fld dword ptr [edx + 8]
// 0057a63f  d99940010000         fstp dword ptr [ecx + 0x140]
// 0057a645  e9c6a0ecff           jmp 0x444710
// 0057a64a  c20400               ret 4

struct VSpecialShape {
    char pad[0x138];
    float x;
    float y;
    float z;
    void f(const float* v);
};

void VSpecialShape::f(const float* v) {
    if (v[0] == x && v[1] == y && v[2] == z)
        return;
    x = v[0];
    y = v[1];
    z = v[2];
    extern void sub_444710(const float*);
    sub_444710(v);
}
