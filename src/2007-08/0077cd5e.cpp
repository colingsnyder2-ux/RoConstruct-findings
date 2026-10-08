// roc 2007-08 0077cd5e  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd5e
//
// 0077cd5e  b98c988c00           mov ecx, 0x8c988c
// 0077cd63  e97e83faff           jmp 0x7250e6
// auto-matched from its assembly shape

struct T_func_0077cd5e { void m(); };
extern T_func_0077cd5e G1_func_0077cd5e;
void func_0077cd5e()
{
    G1_func_0077cd5e.m();
}
