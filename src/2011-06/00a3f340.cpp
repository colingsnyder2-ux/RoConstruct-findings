// roc 2011-06 00a3f340  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f340
//
// 00a3f340  b9004dcd00           mov ecx, 0xcd4d00
// 00a3f345  e9660ca9ff           jmp 0x4cffb0
// auto-matched from its assembly shape

struct T_func_00a3f340 { void m(); };
extern T_func_00a3f340 G1_func_00a3f340;
void func_00a3f340()
{
    G1_func_00a3f340.m();
}
