// roc 2009-06 0085aac0  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085aac0
//
// 0085aac0  b980dea300           mov ecx, 0xa3de80
// 0085aac5  e9868cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085aac0 { void m(); };
extern T_func_0085aac0 G1_func_0085aac0;
void func_0085aac0()
{
    G1_func_0085aac0.m();
}
