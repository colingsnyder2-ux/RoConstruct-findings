// roc 2011-06 00a37f30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f30
//
// 00a37f30  b9a88acc00           mov ecx, 0xcc8aa8
// 00a37f35  e966c2b8ff           jmp 0x5c41a0
// auto-matched from its assembly shape

struct T_func_00a37f30 { void m(); };
extern T_func_00a37f30 G1_func_00a37f30;
void func_00a37f30()
{
    G1_func_00a37f30.m();
}
