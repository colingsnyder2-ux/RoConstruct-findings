// roc 2007-08 0077ccf0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ccf0
//
// 0077ccf0  b948938c00           mov ecx, 0x8c9348
// 0077ccf5  e9d4befbff           jmp 0x738bce
// auto-matched from its assembly shape

struct T_func_0077ccf0 { void m(); };
extern T_func_0077ccf0 G1_func_0077ccf0;
void func_0077ccf0()
{
    G1_func_0077ccf0.m();
}
