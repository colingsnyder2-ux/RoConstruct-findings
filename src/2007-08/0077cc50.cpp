// roc 2007-08 0077cc50  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc50
//
// 0077cc50  b9708f8c00           mov ecx, 0x8c8f70
// 0077cc55  e92cbcfbff           jmp 0x738886
// auto-matched from its assembly shape

struct T_func_0077cc50 { void m(); };
extern T_func_0077cc50 G1_func_0077cc50;
void func_0077cc50()
{
    G1_func_0077cc50.m();
}
