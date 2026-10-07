// roc 2011-06 00a34f80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f80
//
// 00a34f80  b998bbcb00           mov ecx, 0xcbbb98
// 00a34f85  e98675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34f80 { void m(); };
extern T_func_00a34f80 G1_func_00a34f80;
void func_00a34f80()
{
    G1_func_00a34f80.m();
}
