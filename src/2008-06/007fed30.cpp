// roc 2008-06 007fed30  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fed30
//
// 007fed30  b9e8949700           mov ecx, 0x9794e8
// 007fed35  e90650caff           jmp 0x4a3d40
// auto-matched from its assembly shape

struct T_func_007fed30 { void m(); };
extern T_func_007fed30 G1_func_007fed30;
void func_007fed30()
{
    G1_func_007fed30.m();
}
