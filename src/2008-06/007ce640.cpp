// roc 2008-06 007ce640  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce640
//
// 007ce640  b96c3c9700           mov ecx, 0x973c6c
// 007ce645  e906b3c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce640 { void m(); };
extern T_func_007ce640 G1_func_007ce640;
void func_007ce640()
{
    G1_func_007ce640.m();
}
