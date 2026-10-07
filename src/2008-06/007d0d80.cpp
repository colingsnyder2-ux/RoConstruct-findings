// roc 2008-06 007d0d80  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0d80
//
// 007d0d80  b988509700           mov ecx, 0x975088
// 007d0d85  e9c68bc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d0d80 { void m(); };
extern T_func_007d0d80 G1_func_007d0d80;
void func_007d0d80()
{
    G1_func_007d0d80.m();
}
