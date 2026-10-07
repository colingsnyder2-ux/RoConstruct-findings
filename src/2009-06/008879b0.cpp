// roc 2009-06 008879b0  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008879b0
//
// 008879b0  b91be0a300           mov ecx, 0xa3e01b
// 008879b5  e9863ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_008879b0 { void m(); };
extern T_func_008879b0 G1_func_008879b0;
void func_008879b0()
{
    G1_func_008879b0.m();
}
