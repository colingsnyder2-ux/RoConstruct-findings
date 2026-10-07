// roc 2007-08 0077b480  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b480
//
// 0077b480  b970588c00           mov ecx, 0x8c5870
// 0077b485  e986c1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b480 { void m(); };
extern T_func_0077b480 G1_func_0077b480;
void func_0077b480()
{
    G1_func_0077b480.m();
}
