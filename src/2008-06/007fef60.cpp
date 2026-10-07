// roc 2008-06 007fef60  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fef60
//
// 007fef60  b9009b9700           mov ecx, 0x979b00
// 007fef65  e92610ddff           jmp 0x5cff90
// auto-matched from its assembly shape

struct T_func_007fef60 { void m(); };
extern T_func_007fef60 G1_func_007fef60;
void func_007fef60()
{
    G1_func_007fef60.m();
}
