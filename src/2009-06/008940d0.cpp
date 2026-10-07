// roc 2009-06 008940d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008940d0
//
// 008940d0  b940a2a300           mov ecx, 0xa3a240
// 008940d5  e94601b9ff           jmp 0x424220
// auto-matched from its assembly shape

struct T_func_008940d0 { void m(); };
extern T_func_008940d0 G1_func_008940d0;
void func_008940d0()
{
    G1_func_008940d0.m();
}
