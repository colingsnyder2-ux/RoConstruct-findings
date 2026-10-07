// roc 2011-06 00a3c950  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c950
//
// 00a3c950  b9680dcd00           mov ecx, 0xcd0d68
// 00a3c955  e9b6fba6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c950 { void m(); };
extern T_func_00a3c950 G1_func_00a3c950;
void func_00a3c950()
{
    G1_func_00a3c950.m();
}
