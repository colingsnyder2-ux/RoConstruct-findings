// roc 2011-06 00a39a60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a60
//
// 00a39a60  b998bbcc00           mov ecx, 0xccbb98
// 00a39a65  e9a62aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39a60 { void m(); };
extern T_func_00a39a60 G1_func_00a39a60;
void func_00a39a60()
{
    G1_func_00a39a60.m();
}
