// roc 2007-08 0077a8f0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a8f0
//
// 0077a8f0  b968408c00           mov ecx, 0x8c4068
// 0077a8f5  e9c6c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a8f0 { void m(); };
extern T_func_0077a8f0 G1_func_0077a8f0;
void func_0077a8f0()
{
    G1_func_0077a8f0.m();
}
