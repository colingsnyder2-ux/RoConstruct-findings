// roc 2008-06 007c6a50  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c6a50
//
// 007c6a50  b9a0fc9600           mov ecx, 0x96fca0
// 007c6a55  e9f62ec4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c6a50 { void m(); };
extern T_func_007c6a50 G1_func_007c6a50;
void func_007c6a50()
{
    G1_func_007c6a50.m();
}
