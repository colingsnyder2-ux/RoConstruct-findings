// roc 2008-06 00800840  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800840
//
// 00800840  b980c19700           mov ecx, 0x97c180
// 00800845  e976a3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800840 { void m(); };
extern T_func_00800840 G1_func_00800840;
void func_00800840()
{
    G1_func_00800840.m();
}
