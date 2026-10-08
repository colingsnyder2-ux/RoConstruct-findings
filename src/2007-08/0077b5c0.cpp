// roc 2007-08 0077b5c0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b5c0
//
// 0077b5c0  b9585b8c00           mov ecx, 0x8c5b58
// 0077b5c5  e9f6b6c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077b5c0 { void m(); };
extern T_func_0077b5c0 G1_func_0077b5c0;
void func_0077b5c0()
{
    G1_func_0077b5c0.m();
}
