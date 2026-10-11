// from server: 78% by colin
// roc 2008-06 0060c5c0  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c5c0
//
// 0060c5c0  8b9150010000         mov edx, dword ptr [ecx + 0x150]
// 0060c5c6  d98294000000         fld dword ptr [edx + 0x94]
// 0060c5cc  d9442404             fld dword ptr [esp + 4]
// 0060c5d0  dde1                 fucom st(1)
// 0060c5d2  dfe0                 fnstsw ax
// 0060c5d4  ddd9                 fstp st(1)
// 0060c5d6  f6c444               test ah, 0x44
// 0060c5d9  7b13                 jnp 0x60c5ee
// 0060c5db  d99a94000000         fstp dword ptr [edx + 0x94]
// 0060c5e1  c74424049cbe9700     mov dword ptr [esp + 4], 0x97be9c
// 0060c5e9  e91215e0ff           jmp 0x40db00
// 0060c5ee  ddd8                 fstp st(0)
// 0060c5f0  c20400               ret 4

extern "C" void __stdcall Notify(const char *);

struct S {
    void f(float);
};

void S::f(float value)
{
    float *p = *(float **)((char *)this + 0x150);
    if (value == p[0x94 / sizeof(float)])
        return;
    p[0x94 / sizeof(float)] = value;
    Notify("");
}
