// roc 2008-06 007ce080  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce080
//
// 007ce080  b9783b9700           mov ecx, 0x973b78
// 007ce085  e9c6b8c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce080 { void m(); };
extern T_func_007ce080 G1_func_007ce080;
void func_007ce080()
{
    G1_func_007ce080.m();
}
