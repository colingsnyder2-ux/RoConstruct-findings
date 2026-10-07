// roc 2011-06 00a3e110  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e110
//
// 00a3e110  b9b430cd00           mov ecx, 0xcd30b4
// 00a3e115  e9f6e3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e110 { void m(); };
extern T_func_00a3e110 G1_func_00a3e110;
void func_00a3e110()
{
    G1_func_00a3e110.m();
}
