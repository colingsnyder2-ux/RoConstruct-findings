// roc 2008-06 007d6950  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6950
//
// 007d6950  b9ecab9700           mov ecx, 0x97abec
// 007d6955  e9f62fc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6950 { void m(); };
extern T_func_007d6950 G1_func_007d6950;
void func_007d6950()
{
    G1_func_007d6950.m();
}
