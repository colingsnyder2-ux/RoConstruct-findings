// roc 2011-06 00a39a10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a10
//
// 00a39a10  b990b9cc00           mov ecx, 0xccb990
// 00a39a15  e9f62aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39a10 { void m(); };
extern T_func_00a39a10 G1_func_00a39a10;
void func_00a39a10()
{
    G1_func_00a39a10.m();
}
