// roc 2010-06 009e8240  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8240
//
// 009e8240  b9c81dc200           mov ecx, 0xc21dc8
// 009e8245  e926e3baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e8240 { void m(); };
extern T_func_009e8240 G1_func_009e8240;
void func_009e8240()
{
    G1_func_009e8240.m();
}
