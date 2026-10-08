// roc 2007-08 0077c350  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c350
//
// 0077c350  b9b0768c00           mov ecx, 0x8c76b0
// 0077c355  e9b6b2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c350 { void m(); };
extern T_func_0077c350 G1_func_0077c350;
void func_0077c350()
{
    G1_func_0077c350.m();
}
