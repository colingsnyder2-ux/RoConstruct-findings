// roc 2009-06 0089d0a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d0a0
//
// 0089d0a0  b9b8fea400           mov ecx, 0xa4feb8
// 0089d0a5  e9266ee3ff           jmp 0x6d3ed0
// auto-matched from its assembly shape

struct T_func_0089d0a0 { void m(); };
extern T_func_0089d0a0 G1_func_0089d0a0;
void func_0089d0a0()
{
    G1_func_0089d0a0.m();
}
