// roc 2010-06 009e4090  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4090
//
// 009e4090  b968c3c100           mov ecx, 0xc1c368
// 009e4095  e9d624bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e4090 { void m(); };
extern T_func_009e4090 G1_func_009e4090;
void func_009e4090()
{
    G1_func_009e4090.m();
}
