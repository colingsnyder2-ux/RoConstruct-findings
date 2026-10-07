// roc 2008-06 007fef50  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fef50
//
// 007fef50  b9f09b9700           mov ecx, 0x979bf0
// 007fef55  e966bcc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fef50 { void m(); };
extern T_func_007fef50 G1_func_007fef50;
void func_007fef50()
{
    G1_func_007fef50.m();
}
