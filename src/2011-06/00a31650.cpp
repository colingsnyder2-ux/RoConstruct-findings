// roc 2011-06 00a31650  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31650
//
// 00a31650  b9c82bcb00           mov ecx, 0xcb2bc8
// 00a31655  e9b60fa2ff           jmp 0x452610
// auto-matched from its assembly shape

struct T_func_00a31650 { void m(); };
extern T_func_00a31650 G1_func_00a31650;
void func_00a31650()
{
    G1_func_00a31650.m();
}
