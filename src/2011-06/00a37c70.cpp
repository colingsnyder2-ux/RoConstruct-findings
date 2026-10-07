// roc 2011-06 00a37c70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37c70
//
// 00a37c70  b930eecb00           mov ecx, 0xcbee30
// 00a37c75  e9c65e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37c70 { void m(); };
extern T_func_00a37c70 G1_func_00a37c70;
void func_00a37c70()
{
    G1_func_00a37c70.m();
}
