// roc 2011-06 00a35480  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35480
//
// 00a35480  b9a8d5cb00           mov ecx, 0xcbd5a8
// 00a35485  e98670a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35480 { void m(); };
extern T_func_00a35480 G1_func_00a35480;
void func_00a35480()
{
    G1_func_00a35480.m();
}
