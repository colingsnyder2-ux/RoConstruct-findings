// roc 2009-06 008950f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008950f0
//
// 008950f0  b9f0d6a300           mov ecx, 0xa3d6f0
// 008950f5  e91652b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008950f0 { void m(); };
extern T_func_008950f0 G1_func_008950f0;
void func_008950f0()
{
    G1_func_008950f0.m();
}
