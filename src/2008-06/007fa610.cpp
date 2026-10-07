// roc 2008-06 007fa610  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa610
//
// 007fa610  b9e4ce9600           mov ecx, 0x96cee4
// 007fa615  e996a6d9ff           jmp 0x594cb0
// auto-matched from its assembly shape

struct T_func_007fa610 { void m(); };
extern T_func_007fa610 G1_func_007fa610;
void func_007fa610()
{
    G1_func_007fa610.m();
}
