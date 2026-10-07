// roc 2008-06 007fbf90  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbf90
//
// 007fbf90  b918119700           mov ecx, 0x971118
// 007fbf95  e9a6dfcaff           jmp 0x4a9f40
// auto-matched from its assembly shape

struct T_func_007fbf90 { void m(); };
extern T_func_007fbf90 G1_func_007fbf90;
void func_007fbf90()
{
    G1_func_007fbf90.m();
}
