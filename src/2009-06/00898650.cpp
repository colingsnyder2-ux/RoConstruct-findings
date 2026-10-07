// roc 2009-06 00898650  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898650
//
// 00898650  b99076a400           mov ecx, 0xa47690
// 00898655  e9b61cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898650 { void m(); };
extern T_func_00898650 G1_func_00898650;
void func_00898650()
{
    G1_func_00898650.m();
}
