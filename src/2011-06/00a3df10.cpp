// roc 2011-06 00a3df10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3df10
//
// 00a3df10  b9d02ccd00           mov ecx, 0xcd2cd0
// 00a3df15  e9f6e5a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3df10 { void m(); };
extern T_func_00a3df10 G1_func_00a3df10;
void func_00a3df10()
{
    G1_func_00a3df10.m();
}
