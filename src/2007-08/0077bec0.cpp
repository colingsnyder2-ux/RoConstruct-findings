// roc 2007-08 0077bec0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bec0
//
// 0077bec0  b9786c8c00           mov ecx, 0x8c6c78
// 0077bec5  e9f6adc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077bec0 { void m(); };
extern T_func_0077bec0 G1_func_0077bec0;
void func_0077bec0()
{
    G1_func_0077bec0.m();
}
