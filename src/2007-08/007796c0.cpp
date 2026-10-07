// roc 2007-08 007796c0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007796c0
//
// 007796c0  b950168c00           mov ecx, 0x8c1650
// 007796c5  e97610deff           jmp 0x55a740
// auto-matched from its assembly shape

struct T_func_007796c0 { void m(); };
extern T_func_007796c0 G1_func_007796c0;
void func_007796c0()
{
    G1_func_007796c0.m();
}
