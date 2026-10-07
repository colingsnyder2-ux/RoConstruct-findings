// roc 2007-08 007790d0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007790d0
//
// 007790d0  b920fb8b00           mov ecx, 0x8bfb20
// 007790d5  e986afd7ff           jmp 0x4f4060
// auto-matched from its assembly shape

struct T_func_007790d0 { void m(); };
extern T_func_007790d0 G1_func_007790d0;
void func_007790d0()
{
    G1_func_007790d0.m();
}
