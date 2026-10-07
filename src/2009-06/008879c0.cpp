// roc 2009-06 008879c0  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008879c0
//
// 008879c0  b918e0a300           mov ecx, 0xa3e018
// 008879c5  e9763ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_008879c0 { void m(); };
extern T_func_008879c0 G1_func_008879c0;
void func_008879c0()
{
    G1_func_008879c0.m();
}
