// roc 2011-06 00a37e40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e40
//
// 00a37e40  b98094cc00           mov ecx, 0xcc9480
// 00a37e45  e9d6eab8ff           jmp 0x5c6920
// auto-matched from its assembly shape

struct T_func_00a37e40 { void m(); };
extern T_func_00a37e40 G1_func_00a37e40;
void func_00a37e40()
{
    G1_func_00a37e40.m();
}
