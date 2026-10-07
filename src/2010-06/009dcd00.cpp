// roc 2010-06 009dcd00  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcd00
//
// 009dcd00  b9b84fc000           mov ecx, 0xc04fb8
// 009dcd05  e96698bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcd00 { void m(); };
extern T_func_009dcd00 G1_func_009dcd00;
void func_009dcd00()
{
    G1_func_009dcd00.m();
}
