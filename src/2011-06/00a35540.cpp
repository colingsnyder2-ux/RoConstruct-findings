// roc 2011-06 00a35540  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35540
//
// 00a35540  b9d8d5cb00           mov ecx, 0xcbd5d8
// 00a35545  e9c66fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35540 { void m(); };
extern T_func_00a35540 G1_func_00a35540;
void func_00a35540()
{
    G1_func_00a35540.m();
}
