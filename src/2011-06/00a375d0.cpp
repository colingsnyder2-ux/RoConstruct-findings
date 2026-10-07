// roc 2011-06 00a375d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a375d0
//
// 00a375d0  b9a047cc00           mov ecx, 0xcc47a0
// 00a375d5  e966659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a375d0 { void m(); };
extern T_func_00a375d0 G1_func_00a375d0;
void func_00a375d0()
{
    G1_func_00a375d0.m();
}
