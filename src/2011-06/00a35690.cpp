// roc 2011-06 00a35690  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35690
//
// 00a35690  b970ddcb00           mov ecx, 0xcbdd70
// 00a35695  e9267aa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a35690 { void m(); };
extern T_func_00a35690 G1_func_00a35690;
void func_00a35690()
{
    G1_func_00a35690.m();
}
