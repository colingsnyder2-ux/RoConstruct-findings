// roc 2011-06 00a39570  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39570
//
// 00a39570  b930accc00           mov ecx, 0xccac30
// 00a39575  e9962fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39570 { void m(); };
extern T_func_00a39570 G1_func_00a39570;
void func_00a39570()
{
    G1_func_00a39570.m();
}
