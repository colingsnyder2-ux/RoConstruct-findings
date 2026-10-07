// roc 2011-06 00a39c60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c60
//
// 00a39c60  b9e0bccc00           mov ecx, 0xccbce0
// 00a39c65  e9a628a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39c60 { void m(); };
extern T_func_00a39c60 G1_func_00a39c60;
void func_00a39c60()
{
    G1_func_00a39c60.m();
}
