// roc 2007-08 00779440  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779440
//
// 00779440  b9100e8c00           mov ecx, 0x8c0e10
// 00779445  e9d63fe0ff           jmp 0x57d420
// auto-matched from its assembly shape

struct T_func_00779440 { void m(); };
extern T_func_00779440 G1_func_00779440;
void func_00779440()
{
    G1_func_00779440.m();
}
