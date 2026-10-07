// roc 2009-06 0086629e  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086629e
//
// 0086629e  b948a8a400           mov ecx, 0xa4a848
// 008662a3  e9a89cbdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_0086629e { void m(); };
extern T_func_0086629e G1_func_0086629e;
void func_0086629e()
{
    G1_func_0086629e.m();
}
