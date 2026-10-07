// roc 2007-08 0077aaf0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aaf0
//
// 0077aaf0  b9a8428c00           mov ecx, 0x8c42a8
// 0077aaf5  e9c6c1c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aaf0 { void m(); };
extern T_func_0077aaf0 G1_func_0077aaf0;
void func_0077aaf0()
{
    G1_func_0077aaf0.m();
}
