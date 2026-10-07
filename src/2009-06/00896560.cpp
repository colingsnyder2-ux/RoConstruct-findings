// roc 2009-06 00896560  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896560
//
// 00896560  b9d014a400           mov ecx, 0xa414d0
// 00896565  e9a63db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00896560 { void m(); };
extern T_func_00896560 G1_func_00896560;
void func_00896560()
{
    G1_func_00896560.m();
}
