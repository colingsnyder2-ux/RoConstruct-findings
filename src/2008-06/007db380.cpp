// roc 2008-06 007db380  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db380
//
// 007db380  b978d89700           mov ecx, 0x97d878
// 007db385  e9c6e5c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db380 { void m(); };
extern T_func_007db380 G1_func_007db380;
void func_007db380()
{
    G1_func_007db380.m();
}
