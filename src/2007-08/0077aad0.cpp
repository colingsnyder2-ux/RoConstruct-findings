// roc 2007-08 0077aad0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aad0
//
// 0077aad0  b9c8438c00           mov ecx, 0x8c43c8
// 0077aad5  e9e6c1c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aad0 { void m(); };
extern T_func_0077aad0 G1_func_0077aad0;
void func_0077aad0()
{
    G1_func_0077aad0.m();
}
