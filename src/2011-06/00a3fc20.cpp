// roc 2011-06 00a3fc20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fc20
//
// 00a3fc20  b91083d100           mov ecx, 0xd18310
// 00a3fc25  e9bcafdcff           jmp 0x80abe6
// auto-matched from its assembly shape

struct T_func_00a3fc20 { void m(); };
extern T_func_00a3fc20 G1_func_00a3fc20;
void func_00a3fc20()
{
    G1_func_00a3fc20.m();
}
