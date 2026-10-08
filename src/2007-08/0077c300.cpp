// roc 2007-08 0077c300  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c300
//
// 0077c300  b9a0708c00           mov ecx, 0x8c70a0
// 0077c305  e9b6a9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c300 { void m(); };
extern T_func_0077c300 G1_func_0077c300;
void func_0077c300()
{
    G1_func_0077c300.m();
}
