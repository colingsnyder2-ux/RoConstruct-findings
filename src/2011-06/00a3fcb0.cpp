// roc 2011-06 00a3fcb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fcb0
//
// 00a3fcb0  b9b88cd100           mov ecx, 0xd18cb8
// 00a3fcb5  e95658eaff           jmp 0x8e5510
// auto-matched from its assembly shape

struct T_func_00a3fcb0 { void m(); };
extern T_func_00a3fcb0 G1_func_00a3fcb0;
void func_00a3fcb0()
{
    G1_func_00a3fcb0.m();
}
