// roc 2010-06 009e2520  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2520
//
// 009e2520  b9808fc100           mov ecx, 0xc18f80
// 009e2525  e94640bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2520 { void m(); };
extern T_func_009e2520 G1_func_009e2520;
void func_009e2520()
{
    G1_func_009e2520.m();
}
