// roc 2010-06 0099ca70  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099ca70
//
// 0099ca70  b9b0b5c100           mov ecx, 0xc1b5b0
// 0099ca75  e94667b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099ca70 { void m(); };
extern T_func_0099ca70 G1_func_0099ca70;
void func_0099ca70()
{
    G1_func_0099ca70.m();
}
