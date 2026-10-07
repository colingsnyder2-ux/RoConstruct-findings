// roc 2008-06 007c15b0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c15b0
//
// 007c15b0  b924dd9600           mov ecx, 0x96dd24
// 007c15b5  e96627dfff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007c15b0 { void m(); };
extern T_func_007c15b0 G1_func_007c15b0;
void func_007c15b0()
{
    G1_func_007c15b0.m();
}
