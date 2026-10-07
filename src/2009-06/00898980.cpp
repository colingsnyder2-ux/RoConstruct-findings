// roc 2009-06 00898980  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898980
//
// 00898980  b9b84ea400           mov ecx, 0xa44eb8
// 00898985  e98619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898980 { void m(); };
extern T_func_00898980 G1_func_00898980;
void func_00898980()
{
    G1_func_00898980.m();
}
