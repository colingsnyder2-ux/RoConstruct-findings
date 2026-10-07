// roc 2009-06 0088c5c0  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c5c0
//
// 0088c5c0  b940afa400           mov ecx, 0xa4af40
// 0088c5c5  e956b2ceff           jmp 0x577820
// auto-matched from its assembly shape

struct T_func_0088c5c0 { void m(); };
extern T_func_0088c5c0 G1_func_0088c5c0;
void func_0088c5c0()
{
    G1_func_0088c5c0.m();
}
