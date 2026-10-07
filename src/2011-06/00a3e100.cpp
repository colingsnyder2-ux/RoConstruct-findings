// roc 2011-06 00a3e100  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e100
//
// 00a3e100  b9d82fcd00           mov ecx, 0xcd2fd8
// 00a3e105  e906e4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e100 { void m(); };
extern T_func_00a3e100 G1_func_00a3e100;
void func_00a3e100()
{
    G1_func_00a3e100.m();
}
