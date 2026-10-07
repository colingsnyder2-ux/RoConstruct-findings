// roc 2008-06 007fdb80  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdb80
//
// 007fdb80  b9305e9700           mov ecx, 0x975e30
// 007fdb85  e936d0c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fdb80 { void m(); };
extern T_func_007fdb80 G1_func_007fdb80;
void func_007fdb80()
{
    G1_func_007fdb80.m();
}
