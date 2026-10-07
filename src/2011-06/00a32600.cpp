// roc 2011-06 00a32600  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32600
//
// 00a32600  b9585bcb00           mov ecx, 0xcb5b58
// 00a32605  e9e6b7beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a32600 { void m(); };
extern T_func_00a32600 G1_func_00a32600;
void func_00a32600()
{
    G1_func_00a32600.m();
}
