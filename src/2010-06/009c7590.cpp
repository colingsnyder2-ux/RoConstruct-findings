// roc 2010-06 009c7590  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7590
//
// 009c7590  b9755dc000           mov ecx, 0xc05d75
// 009c7595  e94640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7590 { void m(); };
extern T_func_009c7590 G1_func_009c7590;
void func_009c7590()
{
    G1_func_009c7590.m();
}
