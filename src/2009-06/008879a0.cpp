// roc 2009-06 008879a0  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008879a0
//
// 008879a0  b919e0a300           mov ecx, 0xa3e019
// 008879a5  e9963ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_008879a0 { void m(); };
extern T_func_008879a0 G1_func_008879a0;
void func_008879a0()
{
    G1_func_008879a0.m();
}
