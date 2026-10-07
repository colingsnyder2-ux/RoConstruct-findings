// roc 2010-06 009e3360  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3360
//
// 009e3360  b9d8aac100           mov ecx, 0xc1aad8
// 009e3365  e90632bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3360 { void m(); };
extern T_func_009e3360 G1_func_009e3360;
void func_009e3360()
{
    G1_func_009e3360.m();
}
