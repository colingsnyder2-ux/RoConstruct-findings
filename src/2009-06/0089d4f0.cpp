// roc 2009-06 0089d4f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d4f0
//
// 0089d4f0  b9f821a500           mov ecx, 0xa521f8
// 0089d4f5  e91620edff           jmp 0x76f510
// auto-matched from its assembly shape

struct T_func_0089d4f0 { void m(); };
extern T_func_0089d4f0 G1_func_0089d4f0;
void func_0089d4f0()
{
    G1_func_0089d4f0.m();
}
