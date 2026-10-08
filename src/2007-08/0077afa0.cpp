// roc 2007-08 0077afa0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077afa0
//
// 0077afa0  b9f04e8c00           mov ecx, 0x8c4ef0
// 0077afa5  e946fce1ff           jmp 0x59abf0
// auto-matched from its assembly shape

struct T_func_0077afa0 { void m(); };
extern T_func_0077afa0 G1_func_0077afa0;
void func_0077afa0()
{
    G1_func_0077afa0.m();
}
