// roc 2007-08 0077cc40  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc40
//
// 0077cc40  b9688f8c00           mov ecx, 0x8c8f68
// 0077cc45  e93cbcfbff           jmp 0x738886
// auto-matched from its assembly shape

struct T_func_0077cc40 { void m(); };
extern T_func_0077cc40 G1_func_0077cc40;
void func_0077cc40()
{
    G1_func_0077cc40.m();
}
