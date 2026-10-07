// roc 2007-08 007784c0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007784c0
//
// 007784c0  b9d0de8b00           mov ecx, 0x8bded0
// 007784c5  e946f1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007784c0 { void m(); };
extern T_func_007784c0 G1_func_007784c0;
void func_007784c0()
{
    G1_func_007784c0.m();
}
