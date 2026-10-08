// roc 2007-08 0077bbb0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bbb0
//
// 0077bbb0  b960608c00           mov ecx, 0x8c6060
// 0077bbb5  e986b9e3ff           jmp 0x5b7540
// auto-matched from its assembly shape

struct T_func_0077bbb0 { void m(); };
extern T_func_0077bbb0 G1_func_0077bbb0;
void func_0077bbb0()
{
    G1_func_0077bbb0.m();
}
