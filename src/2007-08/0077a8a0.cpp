// roc 2007-08 0077a8a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a8a0
//
// 0077a8a0  b9b0368c00           mov ecx, 0x8c36b0
// 0077a8a5  e97607e1ff           jmp 0x58b020
// auto-matched from its assembly shape

struct T_func_0077a8a0 { void m(); };
extern T_func_0077a8a0 G1_func_0077a8a0;
void func_0077a8a0()
{
    G1_func_0077a8a0.m();
}
