// roc 2007-08 0077cc90  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc90
//
// 0077cc90  b910938c00           mov ecx, 0x8c9310
// 0077cc95  e934bffbff           jmp 0x738bce
// auto-matched from its assembly shape

struct T_func_0077cc90 { void m(); };
extern T_func_0077cc90 G1_func_0077cc90;
void func_0077cc90()
{
    G1_func_0077cc90.m();
}
