// roc 2007-08 0077b050  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b050
//
// 0077b050  b970528c00           mov ecx, 0x8c5270
// 0077b055  e9b6c5c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b050 { void m(); };
extern T_func_0077b050 G1_func_0077b050;
void func_0077b050()
{
    G1_func_0077b050.m();
}
