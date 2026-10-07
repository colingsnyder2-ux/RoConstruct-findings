// roc 2011-06 00a3f290  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f290
//
// 00a3f290  b9584bcd00           mov ecx, 0xcd4b58
// 00a3f295  e926dea6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3f290 { void m(); };
extern T_func_00a3f290 G1_func_00a3f290;
void func_00a3f290()
{
    G1_func_00a3f290.m();
}
