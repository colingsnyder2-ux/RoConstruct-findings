// roc 2007-08 00779a00  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779a00
//
// 00779a00  b940198c00           mov ecx, 0x8c1940
// 00779a05  e9669bdcff           jmp 0x543570
// auto-matched from its assembly shape

struct T_func_00779a00 { void m(); };
extern T_func_00779a00 G1_func_00779a00;
void func_00779a00()
{
    G1_func_00779a00.m();
}
