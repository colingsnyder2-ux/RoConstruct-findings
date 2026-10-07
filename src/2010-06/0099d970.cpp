// roc 2010-06 0099d970  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099d970
//
// 0099d970  b900bcc100           mov ecx, 0xc1bc00
// 0099d975  e94658b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099d970 { void m(); };
extern T_func_0099d970 G1_func_0099d970;
void func_0099d970()
{
    G1_func_0099d970.m();
}
