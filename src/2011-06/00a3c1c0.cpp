// roc 2011-06 00a3c1c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c1c0
//
// 00a3c1c0  b9c8facc00           mov ecx, 0xccfac8
// 00a3c1c5  e94603a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c1c0 { void m(); };
extern T_func_00a3c1c0 G1_func_00a3c1c0;
void func_00a3c1c0()
{
    G1_func_00a3c1c0.m();
}
