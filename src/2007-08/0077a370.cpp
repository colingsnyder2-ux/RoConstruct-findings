// roc 2007-08 0077a370  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a370
//
// 0077a370  b988288c00           mov ecx, 0x8c2888
// 0077a375  e996d2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077a370 { void m(); };
extern T_func_0077a370 G1_func_0077a370;
void func_0077a370()
{
    G1_func_0077a370.m();
}
