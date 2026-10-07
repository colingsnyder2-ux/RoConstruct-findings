// roc 2008-06 007fb900  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb900
//
// 007fb900  b9a0059700           mov ecx, 0x9705a0
// 007fb905  e9d67bcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fb900 { void m(); };
extern T_func_007fb900 G1_func_007fb900;
void func_007fb900()
{
    G1_func_007fb900.m();
}
