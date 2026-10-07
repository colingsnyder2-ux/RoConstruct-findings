// roc 2008-06 007fb0a0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb0a0
//
// 007fb0a0  b9d4ef9600           mov ecx, 0x96efd4
// 007fb0a5  e976aec7ff           jmp 0x475f20
// auto-matched from its assembly shape

struct T_func_007fb0a0 { void m(); };
extern T_func_007fb0a0 G1_func_007fb0a0;
void func_007fb0a0()
{
    G1_func_007fb0a0.m();
}
