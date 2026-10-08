// roc 2007-08 007785a0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007785a0
//
// 007785a0  b978e18b00           mov ecx, 0x8be178
// 007785a5  e94606caff           jmp 0x418bf0
// auto-matched from its assembly shape

struct T_func_007785a0 { void m(); };
extern T_func_007785a0 G1_func_007785a0;
void func_007785a0()
{
    G1_func_007785a0.m();
}
