// roc 2011-06 00a379d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a379d0
//
// 00a379d0  b9a011cc00           mov ecx, 0xcc11a0
// 00a379d5  e966619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a379d0 { void m(); };
extern T_func_00a379d0 G1_func_00a379d0;
void func_00a379d0()
{
    G1_func_00a379d0.m();
}
