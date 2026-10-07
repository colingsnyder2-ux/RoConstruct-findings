// roc 2011-06 00a3df60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3df60
//
// 00a3df60  b9882ccd00           mov ecx, 0xcd2c88
// 00a3df65  e9a6e5a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3df60 { void m(); };
extern T_func_00a3df60 G1_func_00a3df60;
void func_00a3df60()
{
    G1_func_00a3df60.m();
}
