// roc 2007-08 00779370  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779370
//
// 00779370  b9280d8c00           mov ecx, 0x8c0d28
// 00779375  e996e2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779370 { void m(); };
extern T_func_00779370 G1_func_00779370;
void func_00779370()
{
    G1_func_00779370.m();
}
