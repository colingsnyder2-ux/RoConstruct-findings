// roc 2007-08 00779ce0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779ce0
//
// 00779ce0  b9a0218c00           mov ecx, 0x8c21a0
// 00779ce5  e9f609deff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779ce0 { void m(); };
extern T_func_00779ce0 G1_func_00779ce0;
void func_00779ce0()
{
    G1_func_00779ce0.m();
}
