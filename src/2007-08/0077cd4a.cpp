// roc 2007-08 0077cd4a  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd4a
//
// 0077cd4a  b924988c00           mov ecx, 0x8c9824
// 0077cd4f  e93982faff           jmp 0x724f8d
// auto-matched from its assembly shape

struct T_func_0077cd4a { void m(); };
extern T_func_0077cd4a G1_func_0077cd4a;
void func_0077cd4a()
{
    G1_func_0077cd4a.m();
}
