// roc 2009-06 0086626e  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086626e
//
// 0086626e  b948a8a400           mov ecx, 0xa4a848
// 00866273  e9d89cbdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_0086626e { void m(); };
extern T_func_0086626e G1_func_0086626e;
void func_0086626e()
{
    G1_func_0086626e.m();
}
