// roc 2010-06 009e2d00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2d00
//
// 009e2d00  b9f09cc100           mov ecx, 0xc19cf0
// 009e2d05  e93618c2ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e2d00 { void m(); };
extern T_func_009e2d00 G1_func_009e2d00;
void func_009e2d00()
{
    G1_func_009e2d00.m();
}
