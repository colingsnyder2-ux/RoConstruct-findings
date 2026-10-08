// roc 2007-08 0077bed0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bed0
//
// 0077bed0  b9d86b8c00           mov ecx, 0x8c6bd8
// 0077bed5  e936fae5ff           jmp 0x5db910
// auto-matched from its assembly shape

struct T_func_0077bed0 { void m(); };
extern T_func_0077bed0 G1_func_0077bed0;
void func_0077bed0()
{
    G1_func_0077bed0.m();
}
