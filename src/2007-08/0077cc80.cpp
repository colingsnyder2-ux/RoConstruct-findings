// roc 2007-08 0077cc80  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc80
//
// 0077cc80  b998918c00           mov ecx, 0x8c9198
// 0077cc85  e996fbf7ff           jmp 0x6fc820
// auto-matched from its assembly shape

struct T_func_0077cc80 { void m(); };
extern T_func_0077cc80 G1_func_0077cc80;
void func_0077cc80()
{
    G1_func_0077cc80.m();
}
