// roc 2011-06 00a39770  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39770
//
// 00a39770  b9b8adcc00           mov ecx, 0xccadb8
// 00a39775  e9962da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39770 { void m(); };
extern T_func_00a39770 G1_func_00a39770;
void func_00a39770()
{
    G1_func_00a39770.m();
}
