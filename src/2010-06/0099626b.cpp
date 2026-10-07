// roc 2010-06 0099626b  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099626b
//
// 0099626b  b95488c100           mov ecx, 0xc18854
// 00996270  e9eba4daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_0099626b { void m(); };
extern T_func_0099626b G1_func_0099626b;
void func_0099626b()
{
    G1_func_0099626b.m();
}
