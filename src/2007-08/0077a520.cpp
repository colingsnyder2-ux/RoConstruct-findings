// roc 2007-08 0077a520  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a520
//
// 0077a520  b9e82f8c00           mov ecx, 0x8c2fe8
// 0077a525  e9f62ee0ff           jmp 0x57d420
// auto-matched from its assembly shape

struct T_func_0077a520 { void m(); };
extern T_func_0077a520 G1_func_0077a520;
void func_0077a520()
{
    G1_func_0077a520.m();
}
