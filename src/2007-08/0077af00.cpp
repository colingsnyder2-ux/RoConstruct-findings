// roc 2007-08 0077af00  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077af00
//
// 0077af00  b9804e8c00           mov ecx, 0x8c4e80
// 0077af05  e906c7c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077af00 { void m(); };
extern T_func_0077af00 G1_func_0077af00;
void func_0077af00()
{
    G1_func_0077af00.m();
}
