// roc 2011-06 00a37f70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f70
//
// 00a37f70  b90888cc00           mov ecx, 0xcc8808
// 00a37f75  e916bab8ff           jmp 0x5c3990
// auto-matched from its assembly shape

struct T_func_00a37f70 { void m(); };
extern T_func_00a37f70 G1_func_00a37f70;
void func_00a37f70()
{
    G1_func_00a37f70.m();
}
