// roc 2011-06 00a37220  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37220
//
// 00a37220  b96879cc00           mov ecx, 0xcc7968
// 00a37225  e916699dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37220 { void m(); };
extern T_func_00a37220 G1_func_00a37220;
void func_00a37220()
{
    G1_func_00a37220.m();
}
