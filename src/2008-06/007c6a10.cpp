// roc 2008-06 007c6a10  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c6a10
//
// 007c6a10  b928fd9600           mov ecx, 0x96fd28
// 007c6a15  e9362fc4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c6a10 { void m(); };
extern T_func_007c6a10 G1_func_007c6a10;
void func_007c6a10()
{
    G1_func_007c6a10.m();
}
