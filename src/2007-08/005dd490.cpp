// from server: 77% by colin
// roc 2007-08 005dd490  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd490
//
// 005dd490  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 005dd496  d98290000000         fld dword ptr [edx + 0x90]
// 005dd49c  d9442404             fld dword ptr [esp + 4]
// 005dd4a0  dde1                 fucom st(1)
// 005dd4a2  dfe0                 fnstsw ax
// 005dd4a4  ddd9                 fstp st(1)
// 005dd4a6  f6c444               test ah, 0x44
// 005dd4a9  7b13                 jnp 0x5dd4be
// 005dd4ab  d99a90000000         fstp dword ptr [edx + 0x90]
// 005dd4b1  c7442404e06d8c00     mov dword ptr [esp + 4], 0x8c6de0
// 005dd4b9  e95272e6ff           jmp 0x444710
// 005dd4be  ddd8                 fstp st(0)
// 005dd4c0  c20400               ret 4

struct VVelocityMotor {
    char pad[0xf8];
    struct Inner* ptr;
    void setDesiredAngle(float angle);
};

struct Inner {
    char pad[0x90];
    float value;
};

void VVelocityMotor::setDesiredAngle(float angle) {
    Inner* p = ptr;
    float old = p->value;
    if (old == angle) {
        return;
    }
    p->value = angle;
    extern void __stdcall someFunc(float);
    someFunc(angle);
}
