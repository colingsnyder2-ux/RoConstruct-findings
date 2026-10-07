// roc 2007-08 00779420  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779420
//
// 00779420  b9c80e8c00           mov ecx, 0x8c0ec8
// 00779425  e9f63fe0ff           jmp 0x57d420
// auto-matched from its assembly shape

struct T_func_00779420 { void m(); };
extern T_func_00779420 G1_func_00779420;
void func_00779420()
{
    G1_func_00779420.m();
}
