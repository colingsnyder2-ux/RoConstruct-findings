// roc 2010-06 009dcfe0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcfe0
//
// 009dcfe0  b9305bc000           mov ecx, 0xc05b30
// 009dcfe5  e9763bafff           jmp 0x4d0b60
// auto-matched from its assembly shape

struct T_func_009dcfe0 { void m(); };
extern T_func_009dcfe0 G1_func_009dcfe0;
void func_009dcfe0()
{
    G1_func_009dcfe0.m();
}
