// roc 2011-06 00a3f350  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f350
//
// 00a3f350  b9804dcd00           mov ecx, 0xcd4d80
// 00a3f355  e9b6d1a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f350 { void m(); };
extern T_func_00a3f350 G1_func_00a3f350;
void func_00a3f350()
{
    G1_func_00a3f350.m();
}
