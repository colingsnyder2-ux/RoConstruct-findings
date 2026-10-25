// from server: 63% by atomic.potato
// roc 2011-06 006d5f70  unit: RBX::Motor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d5f70
//
// 006d5f70  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 006d5f76  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 006d5f7c  0f2e82a8000000       ucomiss xmm0, dword ptr [edx + 0xa8]
// 006d5f83  9f                   lahf 
// 006d5f84  f6c444               test ah, 0x44
// 006d5f87  7b15                 jnp 0x6d5f9e
// 006d5f89  f30f1182a8000000     movss dword ptr [edx + 0xa8], xmm0
// 006d5f91  c74424047017cd00     mov dword ptr [esp + 4], 0xcd1770
// 006d5f99  e9c2bfd3ff           jmp 0x411f60
// 006d5f9e  c20400               ret 4

struct Motor
{
    unsigned char padding[0xb4];
    void *field_b4;
    void f(float value);
};

extern "C" void __stdcall G1_func_00411f60(void *);

void Motor::f(float value)
{
    float *field = (float *)((unsigned char *)field_b4 + 0xa8);
    if (value != *field)
    {
        *field = value;
        G1_func_00411f60((void *)0x00cd1770);
    }
}
