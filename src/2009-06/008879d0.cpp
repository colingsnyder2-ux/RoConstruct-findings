// roc 2009-06 008879d0  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008879d0
//
// 008879d0  b916e0a300           mov ecx, 0xa3e016
// 008879d5  e9663ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_008879d0 { void m(); };
extern T_func_008879d0 G1_func_008879d0;
void func_008879d0()
{
    G1_func_008879d0.m();
}
