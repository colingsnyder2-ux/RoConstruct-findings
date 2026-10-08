// roc 2007-08 0077aea0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aea0
//
// 0077aea0  b9404c8c00           mov ecx, 0x8c4c40
// 0077aea5  e936f8ddff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_0077aea0 { void m(); };
extern T_func_0077aea0 G1_func_0077aea0;
void func_0077aea0()
{
    G1_func_0077aea0.m();
}
