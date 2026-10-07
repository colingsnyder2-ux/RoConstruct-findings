// roc 2007-08 007799f0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007799f0
//
// 007799f0  b9e0198c00           mov ecx, 0x8c19e0
// 007799f5  e9269ddcff           jmp 0x543720
// auto-matched from its assembly shape

struct T_func_007799f0 { void m(); };
extern T_func_007799f0 G1_func_007799f0;
void func_007799f0()
{
    G1_func_007799f0.m();
}
