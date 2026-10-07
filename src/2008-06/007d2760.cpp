// roc 2008-06 007d2760  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d2760
//
// 007d2760  b960609700           mov ecx, 0x976060
// 007d2765  e9e671c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d2760 { void m(); };
extern T_func_007d2760 G1_func_007d2760;
void func_007d2760()
{
    G1_func_007d2760.m();
}
