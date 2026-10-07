// roc 2008-06 007fb350  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb350
//
// 007fb350  b908fc9600           mov ecx, 0x96fc08
// 007fb355  e98681caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fb350 { void m(); };
extern T_func_007fb350 G1_func_007fb350;
void func_007fb350()
{
    G1_func_007fb350.m();
}
