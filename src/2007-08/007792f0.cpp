// roc 2007-08 007792f0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007792f0
//
// 007792f0  b9580c8c00           mov ecx, 0x8c0c58
// 007792f5  e926c4faff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_007792f0 { void m(); };
extern T_func_007792f0 G1_func_007792f0;
void func_007792f0()
{
    G1_func_007792f0.m();
}
