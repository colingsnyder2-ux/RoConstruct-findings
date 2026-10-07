// roc 2011-06 00a32f30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f30
//
// 00a32f30  b9f068cb00           mov ecx, 0xcb68f0
// 00a32f35  e986a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32f30 { void m(); };
extern T_func_00a32f30 G1_func_00a32f30;
void func_00a32f30()
{
    G1_func_00a32f30.m();
}
