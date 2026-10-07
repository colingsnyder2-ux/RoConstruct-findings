// roc 2010-06 009e4080  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4080
//
// 009e4080  b9d0c2c100           mov ecx, 0xc1c2d0
// 009e4085  e9e624bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e4080 { void m(); };
extern T_func_009e4080 G1_func_009e4080;
void func_009e4080()
{
    G1_func_009e4080.m();
}
