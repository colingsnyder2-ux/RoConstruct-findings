// roc 2009-06 0089c990  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c990
//
// 0089c990  b998f2a400           mov ecx, 0xa4f298
// 0089c995  e9762ed3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089c990 { void m(); };
extern T_func_0089c990 G1_func_0089c990;
void func_0089c990()
{
    G1_func_0089c990.m();
}
