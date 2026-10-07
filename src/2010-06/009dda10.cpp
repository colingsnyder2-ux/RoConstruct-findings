// roc 2010-06 009dda10  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dda10
//
// 009dda10  b94869c000           mov ecx, 0xc06948
// 009dda15  e9568bbbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dda10 { void m(); };
extern T_func_009dda10 G1_func_009dda10;
void func_009dda10()
{
    G1_func_009dda10.m();
}
