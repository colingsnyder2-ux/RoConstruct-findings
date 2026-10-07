// roc 2011-06 00a326d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a326d0
//
// 00a326d0  b9d861cb00           mov ecx, 0xcb61d8
// 00a326d5  e9369ea7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a326d0 { void m(); };
extern T_func_00a326d0 G1_func_00a326d0;
void func_00a326d0()
{
    G1_func_00a326d0.m();
}
