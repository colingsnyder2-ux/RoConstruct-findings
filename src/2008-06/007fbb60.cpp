// roc 2008-06 007fbb60  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbb60
//
// 007fbb60  b9e80b9700           mov ecx, 0x970be8
// 007fbb65  e94640caff           jmp 0x49fbb0
// auto-matched from its assembly shape

struct T_func_007fbb60 { void m(); };
extern T_func_007fbb60 G1_func_007fbb60;
void func_007fbb60()
{
    G1_func_007fbb60.m();
}
