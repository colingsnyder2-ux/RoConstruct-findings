// roc 2009-06 00867520  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00867520
//
// 00867520  b9eca9a400           mov ecx, 0xa4a9ec
// 00867525  e9268abdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_00867520 { void m(); };
extern T_func_00867520 G1_func_00867520;
void func_00867520()
{
    G1_func_00867520.m();
}
