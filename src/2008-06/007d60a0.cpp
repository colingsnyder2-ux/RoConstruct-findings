// roc 2008-06 007d60a0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d60a0
//
// 007d60a0  b958a59700           mov ecx, 0x97a558
// 007d60a5  e9a638c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d60a0 { void m(); };
extern T_func_007d60a0 G1_func_007d60a0;
void func_007d60a0()
{
    G1_func_007d60a0.m();
}
