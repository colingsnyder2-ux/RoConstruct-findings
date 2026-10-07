// roc 2008-06 007d17d0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d17d0
//
// 007d17d0  b9085b9700           mov ecx, 0x975b08
// 007d17d5  e97681c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d17d0 { void m(); };
extern T_func_007d17d0 G1_func_007d17d0;
void func_007d17d0()
{
    G1_func_007d17d0.m();
}
