// roc 2007-08 007796d0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007796d0
//
// 007796d0  b980158c00           mov ecx, 0x8c1580
// 007796d5  e936dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007796d0 { void m(); };
extern T_func_007796d0 G1_func_007796d0;
void func_007796d0()
{
    G1_func_007796d0.m();
}
