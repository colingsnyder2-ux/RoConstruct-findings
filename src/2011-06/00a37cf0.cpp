// roc 2011-06 00a37cf0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37cf0
//
// 00a37cf0  b970e7cb00           mov ecx, 0xcbe770
// 00a37cf5  e9465e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37cf0 { void m(); };
extern T_func_00a37cf0 G1_func_00a37cf0;
void func_00a37cf0()
{
    G1_func_00a37cf0.m();
}
