// roc 2008-06 007d0e00  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0e00
//
// 007d0e00  b9c84f9700           mov ecx, 0x974fc8
// 007d0e05  e9468bc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d0e00 { void m(); };
extern T_func_007d0e00 G1_func_007d0e00;
void func_007d0e00()
{
    G1_func_007d0e00.m();
}
