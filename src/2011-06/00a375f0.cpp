// roc 2011-06 00a375f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a375f0
//
// 00a375f0  b9f045cc00           mov ecx, 0xcc45f0
// 00a375f5  e946659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a375f0 { void m(); };
extern T_func_00a375f0 G1_func_00a375f0;
void func_00a375f0()
{
    G1_func_00a375f0.m();
}
