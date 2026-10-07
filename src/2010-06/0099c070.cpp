// roc 2010-06 0099c070  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c070
//
// 0099c070  b978aac100           mov ecx, 0xc1aa78
// 0099c075  e94671b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c070 { void m(); };
extern T_func_0099c070 G1_func_0099c070;
void func_0099c070()
{
    G1_func_0099c070.m();
}
