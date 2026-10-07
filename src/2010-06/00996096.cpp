// roc 2010-06 00996096  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00996096
//
// 00996096  b9d065c000           mov ecx, 0xc065d0
// 0099609b  e9c0a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_00996096 { void m(); };
extern T_func_00996096 G1_func_00996096;
void func_00996096()
{
    G1_func_00996096.m();
}
