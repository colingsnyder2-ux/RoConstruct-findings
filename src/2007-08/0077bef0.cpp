// roc 2007-08 0077bef0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bef0
//
// 0077bef0  b9986a8c00           mov ecx, 0x8c6a98
// 0077bef5  e9b6f6e5ff           jmp 0x5db5b0
// auto-matched from its assembly shape

struct T_func_0077bef0 { void m(); };
extern T_func_0077bef0 G1_func_0077bef0;
void func_0077bef0()
{
    G1_func_0077bef0.m();
}
