// roc 2011-06 00a32fa0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32fa0
//
// 00a32fa0  b9f867cb00           mov ecx, 0xcb67f8
// 00a32fa5  e916a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32fa0 { void m(); };
extern T_func_00a32fa0 G1_func_00a32fa0;
void func_00a32fa0()
{
    G1_func_00a32fa0.m();
}
