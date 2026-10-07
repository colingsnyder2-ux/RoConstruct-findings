// roc 2009-06 0089a000  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a000
//
// 0089a000  b978baa400           mov ecx, 0xa4ba78
// 0089a005  e90658d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089a000 { void m(); };
extern T_func_0089a000 G1_func_0089a000;
void func_0089a000()
{
    G1_func_0089a000.m();
}
