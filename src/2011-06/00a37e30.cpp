// roc 2011-06 00a37e30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e30
//
// 00a37e30  b92895cc00           mov ecx, 0xcc9528
// 00a37e35  e996edb8ff           jmp 0x5c6bd0
// auto-matched from its assembly shape

struct T_func_00a37e30 { void m(); };
extern T_func_00a37e30 G1_func_00a37e30;
void func_00a37e30()
{
    G1_func_00a37e30.m();
}
