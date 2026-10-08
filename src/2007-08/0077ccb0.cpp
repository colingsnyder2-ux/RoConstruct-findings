// roc 2007-08 0077ccb0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ccb0
//
// 0077ccb0  b914938c00           mov ecx, 0x8c9314
// 0077ccb5  e914bffbff           jmp 0x738bce
// auto-matched from its assembly shape

struct T_func_0077ccb0 { void m(); };
extern T_func_0077ccb0 G1_func_0077ccb0;
void func_0077ccb0()
{
    G1_func_0077ccb0.m();
}
