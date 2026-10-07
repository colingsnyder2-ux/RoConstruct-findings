// roc 2009-06 008975b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008975b0
//
// 008975b0  b9d83ca400           mov ecx, 0xa43cd8
// 008975b5  e95682d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_008975b0 { void m(); };
extern T_func_008975b0 G1_func_008975b0;
void func_008975b0()
{
    G1_func_008975b0.m();
}
