// roc 2011-06 00a3f270  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f270
//
// 00a3f270  b9204bcd00           mov ecx, 0xcd4b20
// 00a3f275  e946dea6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3f270 { void m(); };
extern T_func_00a3f270 G1_func_00a3f270;
void func_00a3f270()
{
    G1_func_00a3f270.m();
}
