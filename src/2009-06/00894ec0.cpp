// roc 2009-06 00894ec0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894ec0
//
// 00894ec0  b970c8a300           mov ecx, 0xa3c870
// 00894ec5  e9d687c0ff           jmp 0x49d6a0
// auto-matched from its assembly shape

struct T_func_00894ec0 { void m(); };
extern T_func_00894ec0 G1_func_00894ec0;
void func_00894ec0()
{
    G1_func_00894ec0.m();
}
