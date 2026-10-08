// roc 2007-08 0077ccd0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ccd0
//
// 0077ccd0  b93c938c00           mov ecx, 0x8c933c
// 0077ccd5  e9acbbfbff           jmp 0x738886
// auto-matched from its assembly shape

struct T_func_0077ccd0 { void m(); };
extern T_func_0077ccd0 G1_func_0077ccd0;
void func_0077ccd0()
{
    G1_func_0077ccd0.m();
}
