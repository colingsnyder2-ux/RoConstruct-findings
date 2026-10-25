// from server: 100% by king_originala
// roc 2008-06 00645d00  unit: RBX::RotateVJoint  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645d00
//
// 00645d00  83ec08               sub esp, 8
// 00645d03  56                   push esi
// 00645d04  57                   push edi
// 00645d05  8bf9                 mov edi, ecx
// 00645d07  8bb7c0000000         mov esi, dword ptr [edi + 0xc0]
// 00645d0d  85f6                 test esi, esi
// 00645d0f  743a                 je 0x645d4b
// 00645d11  e80a87ffff           call 0x63e420
// 00645d16  89442408             mov dword ptr [esp + 8], eax
// 00645d1a  db442408             fild dword ptr [esp + 8]
// 00645d1e  d8bfc4000000         fdivr dword ptr [edi + 0xc4]
// 00645d24  d95c240c             fstp dword ptr [esp + 0xc]
// 00645d28  e8a3350000           call 0x6492d0
// 00645d2d  89442408             mov dword ptr [esp + 8], eax
// 00645d31  db442408             fild dword ptr [esp + 8]
// 00645d35  d87c240c             fdivr dword ptr [esp + 0xc]
// 00645d39  d9562c               fst dword ptr [esi + 0x2c]
// 00645d3c  d9ee                 fldz 
// 00645d3e  dae9                 fucompp 
// 00645d40  dfe0                 fnstsw ax
// 00645d42  f6c444               test ah, 0x44
// 00645d45  7a04                 jp 0x645d4b
// 00645d47  c6463001             mov byte ptr [esi + 0x30], 1
// 00645d4b  5f                   pop edi
// 00645d4c  5e                   pop esi
// 00645d4d  83c408               add esp, 8
// 00645d50  c3                   ret 





#pragma float_control(precise, off)

unsigned int func_0063e420();
unsigned int func_006492d0();

struct State
{
    char padding[0x2c];
    float value;
    unsigned char flag;
};

struct S
{
    char padding[0xc0];
    State* state;
    float scale;

    void f();
};

void S::f()
{
    State* p = state;
    if (p)
    {
        float divisor = (float)(int)func_0063e420();
        float v = scale / divisor;
        float divisor2 = (float)(int)func_006492d0();
        p->value = v / divisor2;
        if (p->value == 0.0f)
            p->flag = 1;
    }
}
