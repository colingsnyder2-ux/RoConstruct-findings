// roc 2007-08 0077c9b0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c9b0
//
// 0077c9b0  b914808c00           mov ecx, 0x8c8014
// 0077c9b5  e956acc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c9b0 { void m(); };
extern T_func_0077c9b0 G1_func_0077c9b0;
void func_0077c9b0()
{
    G1_func_0077c9b0.m();
}
