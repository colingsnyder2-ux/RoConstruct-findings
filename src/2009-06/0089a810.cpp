// roc 2009-06 0089a810  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a810
//
// 0089a810  b9d8caa400           mov ecx, 0xa4cad8
// 0089a815  e9f64fd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089a810 { void m(); };
extern T_func_0089a810 G1_func_0089a810;
void func_0089a810()
{
    G1_func_0089a810.m();
}
