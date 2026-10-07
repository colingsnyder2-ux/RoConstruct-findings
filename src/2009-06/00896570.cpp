// roc 2009-06 00896570  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896570
//
// 00896570  b90814a400           mov ecx, 0xa41408
// 00896575  e9963db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00896570 { void m(); };
extern T_func_00896570 G1_func_00896570;
void func_00896570()
{
    G1_func_00896570.m();
}
