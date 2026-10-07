// roc 2011-06 00a38000  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a38000
//
// 00a38000  b92082cc00           mov ecx, 0xcc8220
// 00a38005  e9b6a0b8ff           jmp 0x5c20c0
// auto-matched from its assembly shape

struct T_func_00a38000 { void m(); };
extern T_func_00a38000 G1_func_00a38000;
void func_00a38000()
{
    G1_func_00a38000.m();
}
