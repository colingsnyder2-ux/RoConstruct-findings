// roc 2007-08 0077ae90  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ae90
//
// 0077ae90  b9784c8c00           mov ecx, 0x8c4c78
// 0077ae95  e9a6f8ddff           jmp 0x55a740
// auto-matched from its assembly shape

struct T_func_0077ae90 { void m(); };
extern T_func_0077ae90 G1_func_0077ae90;
void func_0077ae90()
{
    G1_func_0077ae90.m();
}
