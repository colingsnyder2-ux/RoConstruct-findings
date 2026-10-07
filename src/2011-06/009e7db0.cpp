// roc 2011-06 009e7db0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009e7db0
//
// 009e7db0  b9d4b5cc00           mov ecx, 0xccb5d4
// 009e7db5  e936b5d0ff           jmp 0x6f32f0
// auto-matched from its assembly shape

struct T_func_009e7db0 { void m(); };
extern T_func_009e7db0 G1_func_009e7db0;
void func_009e7db0()
{
    G1_func_009e7db0.m();
}
