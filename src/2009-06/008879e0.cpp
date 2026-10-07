// roc 2009-06 008879e0  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008879e0
//
// 008879e0  b91ce0a300           mov ecx, 0xa3e01c
// 008879e5  e9563ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_008879e0 { void m(); };
extern T_func_008879e0 G1_func_008879e0;
void func_008879e0()
{
    G1_func_008879e0.m();
}
