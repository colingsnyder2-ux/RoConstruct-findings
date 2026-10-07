// roc 2009-06 0089d540  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d540
//
// 0089d540  b94024a500           mov ecx, 0xa52440
// 0089d545  e9e655f5ff           jmp 0x7f2b30
// auto-matched from its assembly shape

struct T_func_0089d540 { void m(); };
extern T_func_0089d540 G1_func_0089d540;
void func_0089d540()
{
    G1_func_0089d540.m();
}
