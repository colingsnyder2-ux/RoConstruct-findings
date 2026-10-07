// roc 2009-06 00866286  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00866286
//
// 00866286  b948a8a400           mov ecx, 0xa4a848
// 0086628b  e9c09cbdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_00866286 { void m(); };
extern T_func_00866286 G1_func_00866286;
void func_00866286()
{
    G1_func_00866286.m();
}
