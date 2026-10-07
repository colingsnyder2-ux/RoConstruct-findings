// roc 2009-06 00893bc0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893bc0
//
// 00893bc0  b9709ba300           mov ecx, 0xa39b70
// 00893bc5  e94667b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893bc0 { void m(); };
extern T_func_00893bc0 G1_func_00893bc0;
void func_00893bc0()
{
    G1_func_00893bc0.m();
}
