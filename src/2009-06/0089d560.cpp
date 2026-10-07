// roc 2009-06 0089d560  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d560
//
// 0089d560  b97026a500           mov ecx, 0xa52670
// 0089d565  e9365fefff           jmp 0x7934a0
// auto-matched from its assembly shape

struct T_func_0089d560 { void m(); };
extern T_func_0089d560 G1_func_0089d560;
void func_0089d560()
{
    G1_func_0089d560.m();
}
