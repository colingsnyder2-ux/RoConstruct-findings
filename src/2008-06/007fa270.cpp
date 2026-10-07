// roc 2008-06 007fa270  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa270
//
// 007fa270  b9a0c79600           mov ecx, 0x96c7a0
// 007fa275  e94609c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa270 { void m(); };
extern T_func_007fa270 G1_func_007fa270;
void func_007fa270()
{
    G1_func_007fa270.m();
}
