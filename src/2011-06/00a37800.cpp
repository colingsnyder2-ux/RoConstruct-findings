// roc 2011-06 00a37800  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37800
//
// 00a37800  b9182acc00           mov ecx, 0xcc2a18
// 00a37805  e936639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37800 { void m(); };
extern T_func_00a37800 G1_func_00a37800;
void func_00a37800()
{
    G1_func_00a37800.m();
}
