// roc 2010-06 009dec00  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dec00
//
// 009dec00  b9c8b2c000           mov ecx, 0xc0b2c8
// 009dec05  e96679bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dec00 { void m(); };
extern T_func_009dec00 G1_func_009dec00;
void func_009dec00()
{
    G1_func_009dec00.m();
}
