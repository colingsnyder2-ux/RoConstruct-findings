// roc 2009-06 0089b600  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b600
//
// 0089b600  b948d5a400           mov ecx, 0xa4d548
// 0089b605  e9f6dbdcff           jmp 0x669200
// auto-matched from its assembly shape

struct T_func_0089b600 { void m(); };
extern T_func_0089b600 G1_func_0089b600;
void func_0089b600()
{
    G1_func_0089b600.m();
}
