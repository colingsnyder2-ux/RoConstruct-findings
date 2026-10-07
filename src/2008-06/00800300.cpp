// roc 2008-06 00800300  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800300
//
// 00800300  b9d8ba9700           mov ecx, 0x97bad8
// 00800305  e9b6a9e0ff           jmp 0x60acc0
// auto-matched from its assembly shape

struct T_func_00800300 { void m(); };
extern T_func_00800300 G1_func_00800300;
void func_00800300()
{
    G1_func_00800300.m();
}
