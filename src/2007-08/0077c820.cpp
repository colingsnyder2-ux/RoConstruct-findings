// roc 2007-08 0077c820  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c820
//
// 0077c820  b9e07e8c00           mov ecx, 0x8c7ee0
// 0077c825  e9e6adc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c820 { void m(); };
extern T_func_0077c820 G1_func_0077c820;
void func_0077c820()
{
    G1_func_0077c820.m();
}
