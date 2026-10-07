// roc 2008-06 007d9ec0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9ec0
//
// 007d9ec0  b91cc89700           mov ecx, 0x97c81c
// 007d9ec5  e986fac2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9ec0 { void m(); };
extern T_func_007d9ec0 G1_func_007d9ec0;
void func_007d9ec0()
{
    G1_func_007d9ec0.m();
}
