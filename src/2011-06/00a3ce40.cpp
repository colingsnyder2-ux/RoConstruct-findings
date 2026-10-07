// roc 2011-06 00a3ce40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ce40
//
// 00a3ce40  b96015cd00           mov ecx, 0xcd1560
// 00a3ce45  e9c6f6a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ce40 { void m(); };
extern T_func_00a3ce40 G1_func_00a3ce40;
void func_00a3ce40()
{
    G1_func_00a3ce40.m();
}
