// roc 2011-06 00a37b60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b60
//
// 00a37b60  b988fccb00           mov ecx, 0xcbfc88
// 00a37b65  e9d65f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b60 { void m(); };
extern T_func_00a37b60 G1_func_00a37b60;
void func_00a37b60()
{
    G1_func_00a37b60.m();
}
