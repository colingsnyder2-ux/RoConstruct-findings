// roc 2010-06 009de8d0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de8d0
//
// 009de8d0  b990a7c000           mov ecx, 0xc0a790
// 009de8d5  e92613bbff           jmp 0x58fc00
// auto-matched from its assembly shape

struct T_func_009de8d0 { void m(); };
extern T_func_009de8d0 G1_func_009de8d0;
void func_009de8d0()
{
    G1_func_009de8d0.m();
}
