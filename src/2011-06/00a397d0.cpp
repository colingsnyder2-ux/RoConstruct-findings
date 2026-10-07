// roc 2011-06 00a397d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a397d0
//
// 00a397d0  b9b8b0cc00           mov ecx, 0xccb0b8
// 00a397d5  e9e638a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a397d0 { void m(); };
extern T_func_00a397d0 G1_func_00a397d0;
void func_00a397d0()
{
    G1_func_00a397d0.m();
}
