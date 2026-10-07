// roc 2010-06 009de900  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de900
//
// 009de900  b9c0a4c000           mov ecx, 0xc0a4c0
// 009de905  e96609bbff           jmp 0x58f270
// auto-matched from its assembly shape

struct T_func_009de900 { void m(); };
extern T_func_009de900 G1_func_009de900;
void func_009de900()
{
    G1_func_009de900.m();
}
