// roc 2011-06 00a3c970  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c970
//
// 00a3c970  b9400bcd00           mov ecx, 0xcd0b40
// 00a3c975  e996fba6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c970 { void m(); };
extern T_func_00a3c970 G1_func_00a3c970;
void func_00a3c970()
{
    G1_func_00a3c970.m();
}
