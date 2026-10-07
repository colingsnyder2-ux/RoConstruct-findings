// roc 2008-06 007fa6f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa6f0
//
// 007fa6f0  b928cd9600           mov ecx, 0x96cd28
// 007fa6f5  e94696caff           jmp 0x4a3d40
// auto-matched from its assembly shape

struct T_func_007fa6f0 { void m(); };
extern T_func_007fa6f0 G1_func_007fa6f0;
void func_007fa6f0()
{
    G1_func_007fa6f0.m();
}
