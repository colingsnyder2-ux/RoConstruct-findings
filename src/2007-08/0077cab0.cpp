// roc 2007-08 0077cab0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cab0
//
// 0077cab0  b9d0878c00           mov ecx, 0x8c87d0
// 0077cab5  e926a0edff           jmp 0x656ae0
// auto-matched from its assembly shape

struct T_func_0077cab0 { void m(); };
extern T_func_0077cab0 G1_func_0077cab0;
void func_0077cab0()
{
    G1_func_0077cab0.m();
}
