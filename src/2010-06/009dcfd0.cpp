// roc 2010-06 009dcfd0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcfd0
//
// 009dcfd0  b9205cc000           mov ecx, 0xc05c20
// 009dcfd5  e9763eafff           jmp 0x4d0e50
// auto-matched from its assembly shape

struct T_func_009dcfd0 { void m(); };
extern T_func_009dcfd0 G1_func_009dcfd0;
void func_009dcfd0()
{
    G1_func_009dcfd0.m();
}
