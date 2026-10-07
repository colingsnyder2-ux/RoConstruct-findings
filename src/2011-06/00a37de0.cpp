// roc 2011-06 00a37de0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37de0
//
// 00a37de0  b97098cc00           mov ecx, 0xcc9870
// 00a37de5  e956fbb8ff           jmp 0x5c7940
// auto-matched from its assembly shape

struct T_func_00a37de0 { void m(); };
extern T_func_00a37de0 G1_func_00a37de0;
void func_00a37de0()
{
    G1_func_00a37de0.m();
}
