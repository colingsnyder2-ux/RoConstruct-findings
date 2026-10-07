// roc 2011-06 00a33a50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33a50
//
// 00a33a50  b99480cb00           mov ecx, 0xcb8094
// 00a33a55  e9b68aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33a50 { void m(); };
extern T_func_00a33a50 G1_func_00a33a50;
void func_00a33a50()
{
    G1_func_00a33a50.m();
}
