// roc 2011-06 00a3d090  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d090
//
// 00a3d090  b92018cd00           mov ecx, 0xcd1820
// 00a3d095  e976f4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d090 { void m(); };
extern T_func_00a3d090 G1_func_00a3d090;
void func_00a3d090()
{
    G1_func_00a3d090.m();
}
