// roc 2007-08 00779cd0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779cd0
//
// 00779cd0  b938218c00           mov ecx, 0x8c2138
// 00779cd5  e9060adeff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779cd0 { void m(); };
extern T_func_00779cd0 G1_func_00779cd0;
void func_00779cd0()
{
    G1_func_00779cd0.m();
}
