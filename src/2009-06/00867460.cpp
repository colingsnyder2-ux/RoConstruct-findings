// roc 2009-06 00867460  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00867460
//
// 00867460  b970ada400           mov ecx, 0xa4ad70
// 00867465  e9e6c2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00867460 { void m(); };
extern T_func_00867460 G1_func_00867460;
void func_00867460()
{
    G1_func_00867460.m();
}
