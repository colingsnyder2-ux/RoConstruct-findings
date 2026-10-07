// roc 2011-06 00a37670  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37670
//
// 00a37670  b9303fcc00           mov ecx, 0xcc3f30
// 00a37675  e9c6649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37670 { void m(); };
extern T_func_00a37670 G1_func_00a37670;
void func_00a37670()
{
    G1_func_00a37670.m();
}
