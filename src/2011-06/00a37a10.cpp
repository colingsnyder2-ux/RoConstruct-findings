// roc 2011-06 00a37a10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37a10
//
// 00a37a10  b9400ecc00           mov ecx, 0xcc0e40
// 00a37a15  e926619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37a10 { void m(); };
extern T_func_00a37a10 G1_func_00a37a10;
void func_00a37a10()
{
    G1_func_00a37a10.m();
}
