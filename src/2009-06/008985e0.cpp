// roc 2009-06 008985e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008985e0
//
// 008985e0  b9087ca400           mov ecx, 0xa47c08
// 008985e5  e9261db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008985e0 { void m(); };
extern T_func_008985e0 G1_func_008985e0;
void func_008985e0()
{
    G1_func_008985e0.m();
}
