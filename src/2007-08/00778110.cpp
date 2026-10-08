// roc 2007-08 00778110  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778110
//
// 00778110  b948de8b00           mov ecx, 0x8bde48
// 00778115  e9f6f4c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778110 { void m(); };
extern T_func_00778110 G1_func_00778110;
void func_00778110()
{
    G1_func_00778110.m();
}
