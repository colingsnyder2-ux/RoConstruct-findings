// roc 2008-06 007fe840  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe840
//
// 007fe840  b900799700           mov ecx, 0x977900
// 007fe845  e976c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe840 { void m(); };
extern T_func_007fe840 G1_func_007fe840;
void func_007fe840()
{
    G1_func_007fe840.m();
}
