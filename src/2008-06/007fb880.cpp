// roc 2008-06 007fb880  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb880
//
// 007fb880  b958049700           mov ecx, 0x970458
// 007fb885  e9567ccaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fb880 { void m(); };
extern T_func_007fb880 G1_func_007fb880;
void func_007fb880()
{
    G1_func_007fb880.m();
}
