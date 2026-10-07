// roc 2009-06 0089d5e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d5e0
//
// 0089d5e0  b91c2ba500           mov ecx, 0xa52b1c
// 0089d5e5  e9eaeafaff           jmp 0x84c0d4
// auto-matched from its assembly shape

struct T_func_0089d5e0 { void m(); };
extern T_func_0089d5e0 G1_func_0089d5e0;
void func_0089d5e0()
{
    G1_func_0089d5e0.m();
}
