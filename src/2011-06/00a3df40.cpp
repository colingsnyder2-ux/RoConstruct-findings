// roc 2011-06 00a3df40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3df40
//
// 00a3df40  b9c02dcd00           mov ecx, 0xcd2dc0
// 00a3df45  e9c6e5a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3df40 { void m(); };
extern T_func_00a3df40 G1_func_00a3df40;
void func_00a3df40()
{
    G1_func_00a3df40.m();
}
