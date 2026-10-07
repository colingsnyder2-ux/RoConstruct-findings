// roc 2007-08 0077aac0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aac0
//
// 0077aac0  b978458c00           mov ecx, 0x8c4578
// 0077aac5  e9f6c1c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aac0 { void m(); };
extern T_func_0077aac0 G1_func_0077aac0;
void func_0077aac0()
{
    G1_func_0077aac0.m();
}
