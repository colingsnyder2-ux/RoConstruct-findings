// roc 2010-06 009de9e0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de9e0
//
// 009de9e0  b994b2c000           mov ecx, 0xc0b294
// 009de9e5  e92656bbff           jmp 0x594010
// auto-matched from its assembly shape

struct T_func_009de9e0 { void m(); };
extern T_func_009de9e0 G1_func_009de9e0;
void func_009de9e0()
{
    G1_func_009de9e0.m();
}
