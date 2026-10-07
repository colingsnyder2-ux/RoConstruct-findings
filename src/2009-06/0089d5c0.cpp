// roc 2009-06 0089d5c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d5c0
//
// 0089d5c0  b9a029a500           mov ecx, 0xa529a0
// 0089d5c5  e9a682f4ff           jmp 0x7e5870
// auto-matched from its assembly shape

struct T_func_0089d5c0 { void m(); };
extern T_func_0089d5c0 G1_func_0089d5c0;
void func_0089d5c0()
{
    G1_func_0089d5c0.m();
}
