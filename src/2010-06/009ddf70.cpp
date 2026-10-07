// roc 2010-06 009ddf70  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddf70
//
// 009ddf70  b9088fc000           mov ecx, 0xc08f08
// 009ddf75  e9b666b5ff           jmp 0x534630
// auto-matched from its assembly shape

struct T_func_009ddf70 { void m(); };
extern T_func_009ddf70 G1_func_009ddf70;
void func_009ddf70()
{
    G1_func_009ddf70.m();
}
