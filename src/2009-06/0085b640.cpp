// roc 2009-06 0085b640  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085b640
//
// 0085b640  b938f0a300           mov ecx, 0xa3f038
// 0085b645  e90681c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085b640 { void m(); };
extern T_func_0085b640 G1_func_0085b640;
void func_0085b640()
{
    G1_func_0085b640.m();
}
