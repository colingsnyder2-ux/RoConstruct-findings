// roc 2007-08 0077cca0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cca0
//
// 0077cca0  b9f0928c00           mov ecx, 0x8c92f0
// 0077cca5  e9c662f2ff           jmp 0x6a2f70
// auto-matched from its assembly shape

struct T_func_0077cca0 { void m(); };
extern T_func_0077cca0 G1_func_0077cca0;
void func_0077cca0()
{
    G1_func_0077cca0.m();
}
