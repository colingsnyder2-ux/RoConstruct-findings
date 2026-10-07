// roc 2010-06 009ddf60  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddf60
//
// 009ddf60  b9708fc000           mov ecx, 0xc08f70
// 009ddf65  e94667b5ff           jmp 0x5346b0
// auto-matched from its assembly shape

struct T_func_009ddf60 { void m(); };
extern T_func_009ddf60 G1_func_009ddf60;
void func_009ddf60()
{
    G1_func_009ddf60.m();
}
