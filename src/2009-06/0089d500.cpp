// roc 2009-06 0089d500  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d500
//
// 0089d500  b91022a500           mov ecx, 0xa52210
// 0089d505  e9eeeefaff           jmp 0x84c3f8
// auto-matched from its assembly shape

struct T_func_0089d500 { void m(); };
extern T_func_0089d500 G1_func_0089d500;
void func_0089d500()
{
    G1_func_0089d500.m();
}
