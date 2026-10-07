// roc 2011-06 00a3df00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3df00
//
// 00a3df00  b9f02dcd00           mov ecx, 0xcd2df0
// 00a3df05  e906e6a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3df00 { void m(); };
extern T_func_00a3df00 G1_func_00a3df00;
void func_00a3df00()
{
    G1_func_00a3df00.m();
}
