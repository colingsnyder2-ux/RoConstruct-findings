// roc 2007-08 0077b4a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b4a0
//
// 0077b4a0  b980578c00           mov ecx, 0x8c5780
// 0077b4a5  e966c1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b4a0 { void m(); };
extern T_func_0077b4a0 G1_func_0077b4a0;
void func_0077b4a0()
{
    G1_func_0077b4a0.m();
}
