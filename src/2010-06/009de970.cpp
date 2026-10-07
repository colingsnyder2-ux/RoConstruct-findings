// roc 2010-06 009de970  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de970
//
// 009de970  b988a9c000           mov ecx, 0xc0a988
// 009de975  e9f67bbbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009de970 { void m(); };
extern T_func_009de970 G1_func_009de970;
void func_009de970()
{
    G1_func_009de970.m();
}
