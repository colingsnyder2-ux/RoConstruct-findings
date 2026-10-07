// roc 2008-06 007fc090  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc090
//
// 007fc090  b9c8169700           mov ecx, 0x9716c8
// 007fc095  e94674caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fc090 { void m(); };
extern T_func_007fc090 G1_func_007fc090;
void func_007fc090()
{
    G1_func_007fc090.m();
}
