// roc 2008-06 007fe480  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe480
//
// 007fe480  b998739700           mov ecx, 0x977398
// 007fe485  e936c7c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe480 { void m(); };
extern T_func_007fe480 G1_func_007fe480;
void func_007fe480()
{
    G1_func_007fe480.m();
}
