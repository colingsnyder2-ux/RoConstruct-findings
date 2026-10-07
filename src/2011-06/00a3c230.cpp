// roc 2011-06 00a3c230  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c230
//
// 00a3c230  b950fccc00           mov ecx, 0xccfc50
// 00a3c235  e9d602a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c230 { void m(); };
extern T_func_00a3c230 G1_func_00a3c230;
void func_00a3c230()
{
    G1_func_00a3c230.m();
}
