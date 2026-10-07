// roc 2007-08 00779680  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779680
//
// 00779680  b95c158c00           mov ecx, 0x8c155c
// 00779685  e986dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779680 { void m(); };
extern T_func_00779680 G1_func_00779680;
void func_00779680()
{
    G1_func_00779680.m();
}
