// roc 2008-06 007fcc00  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcc00
//
// 007fcc00  b928409700           mov ecx, 0x974028
// 007fcc05  e9b6dfc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fcc00 { void m(); };
extern T_func_007fcc00 G1_func_007fcc00;
void func_007fcc00()
{
    G1_func_007fcc00.m();
}
