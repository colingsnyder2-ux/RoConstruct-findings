// roc 2009-06 008879f0  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008879f0
//
// 008879f0  b91ae0a300           mov ecx, 0xa3e01a
// 008879f5  e9463ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_008879f0 { void m(); };
extern T_func_008879f0 G1_func_008879f0;
void func_008879f0()
{
    G1_func_008879f0.m();
}
