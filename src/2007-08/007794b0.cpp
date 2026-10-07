// roc 2007-08 007794b0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007794b0
//
// 007794b0  b9a8118c00           mov ecx, 0x8c11a8
// 007794b5  e906d8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007794b0 { void m(); };
extern T_func_007794b0 G1_func_007794b0;
void func_007794b0()
{
    G1_func_007794b0.m();
}
