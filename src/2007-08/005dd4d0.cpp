// from server: 75% by colin
// roc 2007-08 005dd4d0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd4d0
//
// 005dd4d0  56                   push esi
// 005dd4d1  8bf1                 mov esi, ecx
// 005dd4d3  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 005dd4d9  d98188000000         fld dword ptr [ecx + 0x88]
// 005dd4df  d9442408             fld dword ptr [esp + 8]
// 005dd4e3  dde1                 fucom st(1)
// 005dd4e5  dfe0                 fnstsw ax
// 005dd4e7  ddd9                 fstp st(1)
// 005dd4e9  f6c444               test ah, 0x44
// 005dd4ec  7b19                 jnp 0x5dd507
// 005dd4ee  51                   push ecx
// 005dd4ef  d91c24               fstp dword ptr [esp]
// 005dd4f2  e8a96dfdff           call 0x5b42a0
// 005dd4f7  68c46d8c00           push 0x8c6dc4
// 005dd4fc  8bce                 mov ecx, esi
// 005dd4fe  e80d72e6ff           call 0x444710
// 005dd503  5e                   pop esi
// 005dd504  c20400               ret 4
// 005dd507  ddd8                 fstp st(0)
// 005dd509  5e                   pop esi
// 005dd50a  c20400               ret 4

struct VVelocityMotor {
    unsigned char pad[0xf8];
    void* field_f8;
    void setDesiredAngle(float angle);
};

extern "C" void __cdecl func_5b42a0(float);
extern "C" void __stdcall func_444710(void*);

void VVelocityMotor::setDesiredAngle(float angle)
{
    float current = *(float*)((char*)field_f8 + 0x88);
    if (current != angle)
    {
        func_5b42a0(angle);
        func_444710((void*)0x8c6dc4);
    }
}
