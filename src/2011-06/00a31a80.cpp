// roc 2011-06 00a31a80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31a80
//
// 00a31a80  b9183dcb00           mov ecx, 0xcb3d18
// 00a31a85  e9f6c7a3ff           jmp 0x46e280
// auto-matched from its assembly shape

struct T_func_00a31a80 { void m(); };
extern T_func_00a31a80 G1_func_00a31a80;
void func_00a31a80()
{
    G1_func_00a31a80.m();
}
