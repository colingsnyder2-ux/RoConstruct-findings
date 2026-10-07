// roc 2007-08 0077cd10  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd10
//
// 0077cd10  b958978c00           mov ecx, 0x8c9758
// 0077cd15  e9863af9ff           jmp 0x7107a0
// auto-matched from its assembly shape

struct T_func_0077cd10 { void m(); };
extern T_func_0077cd10 G1_func_0077cd10;
void func_0077cd10()
{
    G1_func_0077cd10.m();
}
