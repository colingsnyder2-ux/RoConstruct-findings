// roc 2011-06 00a37dc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37dc0
//
// 00a37dc0  b9c099cc00           mov ecx, 0xcc99c0
// 00a37dc5  e9d600b9ff           jmp 0x5c7ea0
// auto-matched from its assembly shape

struct T_func_00a37dc0 { void m(); };
extern T_func_00a37dc0 G1_func_00a37dc0;
void func_00a37dc0()
{
    G1_func_00a37dc0.m();
}
