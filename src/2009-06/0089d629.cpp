// roc 2009-06 0089d629  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d629
//
// 0089d629  b9002ca500           mov ecx, 0xa52c00
// 0089d62e  e9d1d9f7ff           jmp 0x81b004
// auto-matched from its assembly shape

struct T_func_0089d629 { void m(); };
extern T_func_0089d629 G1_func_0089d629;
void func_0089d629()
{
    G1_func_0089d629.m();
}
