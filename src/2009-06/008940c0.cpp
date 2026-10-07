// roc 2009-06 008940c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008940c0
//
// 008940c0  b91ca2a300           mov ecx, 0xa3a21c
// 008940c5  e95601b9ff           jmp 0x424220
// auto-matched from its assembly shape

struct T_func_008940c0 { void m(); };
extern T_func_008940c0 G1_func_008940c0;
void func_008940c0()
{
    G1_func_008940c0.m();
}
