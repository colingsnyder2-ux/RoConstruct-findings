// roc 2009-06 00899720  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899720
//
// 00899720  b9a0aea400           mov ecx, 0xa4aea0
// 00899725  e9d684dbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_00899720 { void m(); };
extern T_func_00899720 G1_func_00899720;
void func_00899720()
{
    G1_func_00899720.m();
}
