// roc 2010-06 009e0fb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0fb0
//
// 009e0fb0  b9b06ec100           mov ecx, 0xc16eb0
// 009e0fb5  e956e3bcff           jmp 0x5af310
// auto-matched from its assembly shape

struct T_func_009e0fb0 { void m(); };
extern T_func_009e0fb0 G1_func_009e0fb0;
void func_009e0fb0()
{
    G1_func_009e0fb0.m();
}
