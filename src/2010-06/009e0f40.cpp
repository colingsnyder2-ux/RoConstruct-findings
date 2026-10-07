// roc 2010-06 009e0f40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f40
//
// 009e0f40  b94075c100           mov ecx, 0xc17540
// 009e0f45  e986f6bcff           jmp 0x5b05d0
// auto-matched from its assembly shape

struct T_func_009e0f40 { void m(); };
extern T_func_009e0f40 G1_func_009e0f40;
void func_009e0f40()
{
    G1_func_009e0f40.m();
}
