// roc 2008-06 007fed40  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fed40
//
// 007fed40  b9a0949700           mov ecx, 0x9794a0
// 007fed45  e99647caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fed40 { void m(); };
extern T_func_007fed40 G1_func_007fed40;
void func_007fed40()
{
    G1_func_007fed40.m();
}
