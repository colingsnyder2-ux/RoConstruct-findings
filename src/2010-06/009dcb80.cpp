// roc 2010-06 009dcb80  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcb80
//
// 009dcb80  b9104bc000           mov ecx, 0xc04b10
// 009dcb85  e9569caeff           jmp 0x4c67e0
// auto-matched from its assembly shape

struct T_func_009dcb80 { void m(); };
extern T_func_009dcb80 G1_func_009dcb80;
void func_009dcb80()
{
    G1_func_009dcb80.m();
}
