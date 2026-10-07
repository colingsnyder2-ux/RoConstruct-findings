// roc 2007-08 0077c970  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c970
//
// 0077c970  b97c818c00           mov ecx, 0x8c817c
// 0077c975  e996acc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c970 { void m(); };
extern T_func_0077c970 G1_func_0077c970;
void func_0077c970()
{
    G1_func_0077c970.m();
}
