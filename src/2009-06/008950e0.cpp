// roc 2009-06 008950e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008950e0
//
// 008950e0  b9b8d7a300           mov ecx, 0xa3d7b8
// 008950e5  e92652b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008950e0 { void m(); };
extern T_func_008950e0 G1_func_008950e0;
void func_008950e0()
{
    G1_func_008950e0.m();
}
