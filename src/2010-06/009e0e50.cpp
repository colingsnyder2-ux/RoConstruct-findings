// roc 2010-06 009e0e50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e50
//
// 009e0e50  b990c4c000           mov ecx, 0xc0c490
// 009e0e55  e92697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0e50 { void m(); };
extern T_func_009e0e50 G1_func_009e0e50;
void func_009e0e50()
{
    G1_func_009e0e50.m();
}
