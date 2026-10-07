// roc 2007-08 007787a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007787a0
//
// 007787a0  b9e0e58b00           mov ecx, 0x8be5e0
// 007787a5  e966eec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007787a0 { void m(); };
extern T_func_007787a0 G1_func_007787a0;
void func_007787a0()
{
    G1_func_007787a0.m();
}
