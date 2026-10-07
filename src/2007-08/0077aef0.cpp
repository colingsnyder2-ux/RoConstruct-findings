// roc 2007-08 0077aef0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aef0
//
// 0077aef0  b9b04e8c00           mov ecx, 0x8c4eb0
// 0077aef5  e916c7c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077aef0 { void m(); };
extern T_func_0077aef0 G1_func_0077aef0;
void func_0077aef0()
{
    G1_func_0077aef0.m();
}
