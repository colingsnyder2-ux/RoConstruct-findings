// roc 2010-06 009db830  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db830
//
// 009db830  b9500cc000           mov ecx, 0xc00c50
// 009db835  e916b7a6ff           jmp 0x446f50
// auto-matched from its assembly shape

struct T_func_009db830 { void m(); };
extern T_func_009db830 G1_func_009db830;
void func_009db830()
{
    G1_func_009db830.m();
}
