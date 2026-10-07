// roc 2011-06 00a35660  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35660
//
// 00a35660  b978dbcb00           mov ecx, 0xcbdb78
// 00a35665  e9c639b7ff           jmp 0x5a9030
// auto-matched from its assembly shape

struct T_func_00a35660 { void m(); };
extern T_func_00a35660 G1_func_00a35660;
void func_00a35660()
{
    G1_func_00a35660.m();
}
