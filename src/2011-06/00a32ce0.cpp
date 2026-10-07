// roc 2011-06 00a32ce0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32ce0
//
// 00a32ce0  b93861cb00           mov ecx, 0xcb6138
// 00a32ce5  e92698a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32ce0 { void m(); };
extern T_func_00a32ce0 G1_func_00a32ce0;
void func_00a32ce0()
{
    G1_func_00a32ce0.m();
}
