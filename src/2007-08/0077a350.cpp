// roc 2007-08 0077a350  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a350
//
// 0077a350  b9d82b8c00           mov ecx, 0x8c2bd8
// 0077a355  e966c9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a350 { void m(); };
extern T_func_0077a350 G1_func_0077a350;
void func_0077a350()
{
    G1_func_0077a350.m();
}
