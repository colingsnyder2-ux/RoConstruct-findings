// from server: 100% by king_originala
// roc 2008-06 00645cb0  unit: RBX::RotatePJoint  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645cb0
//
// 00645cb0  83ec08               sub esp, 8
// 00645cb3  56                   push esi
// 00645cb4  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 00645cba  85f6                 test esi, esi
// 00645cbc  743d                 je 0x645cfb
// 00645cbe  d981c4000000         fld dword ptr [ecx + 0xc4]
// 00645cc4  d9542404             fst dword ptr [esp + 4]
// 00645cc8  d94624               fld dword ptr [esi + 0x24]
// 00645ccb  dde9                 fucomp st(1)
// 00645ccd  dfe0                 fnstsw ax
// 00645ccf  f6c444               test ah, 0x44
// 00645cd2  7a0d                 jp 0x645ce1
// 00645cd4  d95e28               fstp dword ptr [esi + 0x28]
// 00645cd7  d9ee                 fldz 
// 00645cd9  d95e2c               fstp dword ptr [esi + 0x2c]
// 00645cdc  5e                   pop esi
// 00645cdd  83c408               add esp, 8
// 00645ce0  c3                   ret 
// 00645ce1  d95e24               fstp dword ptr [esi + 0x24]
// 00645ce4  e8e7350000           call 0x6492d0
// 00645ce9  d9442404             fld dword ptr [esp + 4]
// 00645ced  89442408             mov dword ptr [esp + 8], eax
// 00645cf1  d86628               fsub dword ptr [esi + 0x28]
// 00645cf4  da742408             fidiv dword ptr [esp + 8]
// 00645cf8  d95e2c               fstp dword ptr [esi + 0x2c]
// 00645cfb  5e                   pop esi
// 00645cfc  83c408               add esp, 8
// 00645cff  c3                   ret 

unsigned int func_006492d0();

struct State
{
    char padding[0x24];
    float previous;
    float baseline;
    float rate;
};

struct Joint
{
    char padding[0xc0];
    State* state;
    float value;
    void update();
};

#pragma float_control(precise, off, push)

void Joint::update()
{
    State* s = state;
    if (s)
    {
        float v = value;
        if (v == s->previous)
        {
            s->baseline = v;
            s->rate = 0.0f;
        }
        else
        {
            s->previous = v;
            int divisor = (int)func_006492d0();
            s->rate = (v - s->baseline) / divisor;
        }
    }
}

#pragma float_control(pop)
