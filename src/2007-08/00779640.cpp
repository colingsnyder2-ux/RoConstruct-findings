// roc 2007-08 00779640  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779640
//
// 00779640  b9a8158c00           mov ecx, 0x8c15a8
// 00779645  e9c6dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779640 { void m(); };
extern T_func_00779640 G1_func_00779640;
void func_00779640()
{
    G1_func_00779640.m();
}
