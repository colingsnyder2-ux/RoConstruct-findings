// roc 2011-06 00a18fe0  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18fe0
//
// 00a18fe0  b94979cb00           mov ecx, 0xcb7949
// 00a18fe5  e93631a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a18fe0 { void m(); };
extern T_func_00a18fe0 G1_func_00a18fe0;
void func_00a18fe0()
{
    G1_func_00a18fe0.m();
}
