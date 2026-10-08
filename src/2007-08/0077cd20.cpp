// roc 2007-08 0077cd20  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd20
//
// 0077cd20  b9a4978c00           mov ecx, 0x8c97a4
// 0077cd25  e9c0b7fbff           jmp 0x7384ea
// auto-matched from its assembly shape

struct T_func_0077cd20 { void m(); };
extern T_func_0077cd20 G1_func_0077cd20;
void func_0077cd20()
{
    G1_func_0077cd20.m();
}
