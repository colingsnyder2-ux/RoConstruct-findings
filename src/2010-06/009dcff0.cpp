// roc 2010-06 009dcff0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcff0
//
// 009dcff0  b9405ac000           mov ecx, 0xc05a40
// 009dcff5  e97638afff           jmp 0x4d0870
// auto-matched from its assembly shape

struct T_func_009dcff0 { void m(); };
extern T_func_009dcff0 G1_func_009dcff0;
void func_009dcff0()
{
    G1_func_009dcff0.m();
}
