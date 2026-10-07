// roc 2009-06 0089d4c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d4c0
//
// 0089d4c0  b9c81fa500           mov ecx, 0xa51fc8
// 0089d4c5  e9d640ecff           jmp 0x7615a0
// auto-matched from its assembly shape

struct T_func_0089d4c0 { void m(); };
extern T_func_0089d4c0 G1_func_0089d4c0;
void func_0089d4c0()
{
    G1_func_0089d4c0.m();
}
