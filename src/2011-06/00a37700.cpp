// roc 2011-06 00a37700  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37700
//
// 00a37700  b99837cc00           mov ecx, 0xcc3798
// 00a37705  e936649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37700 { void m(); };
extern T_func_00a37700 G1_func_00a37700;
void func_00a37700()
{
    G1_func_00a37700.m();
}
