// roc 2008-06 00800bc0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800bc0
//
// 00800bc0  b970cf9700           mov ecx, 0x97cf70
// 00800bc5  e9f69fc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800bc0 { void m(); };
extern T_func_00800bc0 G1_func_00800bc0;
void func_00800bc0()
{
    G1_func_00800bc0.m();
}
