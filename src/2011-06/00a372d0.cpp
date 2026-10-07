// roc 2011-06 00a372d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a372d0
//
// 00a372d0  b92070cc00           mov ecx, 0xcc7020
// 00a372d5  e966689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a372d0 { void m(); };
extern T_func_00a372d0 G1_func_00a372d0;
void func_00a372d0()
{
    G1_func_00a372d0.m();
}
