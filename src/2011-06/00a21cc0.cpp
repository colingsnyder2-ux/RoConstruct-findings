// roc 2011-06 00a21cc0  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21cc0
//
// 00a21cc0  b9a0b6cc00           mov ecx, 0xccb6a0
// 00a21cc5  e90606b3ff           jmp 0x5522d0
// auto-matched from its assembly shape

struct T_func_00a21cc0 { void m(); };
extern T_func_00a21cc0 G1_func_00a21cc0;
void func_00a21cc0()
{
    G1_func_00a21cc0.m();
}
