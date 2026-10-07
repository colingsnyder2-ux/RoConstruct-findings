// roc 2011-06 00a37970  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37970
//
// 00a37970  b9b016cc00           mov ecx, 0xcc16b0
// 00a37975  e9c6619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37970 { void m(); };
extern T_func_00a37970 G1_func_00a37970;
void func_00a37970()
{
    G1_func_00a37970.m();
}
