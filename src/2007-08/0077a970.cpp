// roc 2007-08 0077a970  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a970
//
// 0077a970  b9e83b8c00           mov ecx, 0x8c3be8
// 0077a975  e946c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a970 { void m(); };
extern T_func_0077a970 G1_func_0077a970;
void func_0077a970()
{
    G1_func_0077a970.m();
}
