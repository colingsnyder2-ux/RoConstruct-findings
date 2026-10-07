// roc 2008-06 007fad80  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fad80
//
// 007fad80  b9a8da9600           mov ecx, 0x96daa8
// 007fad85  e906c0c4ff           jmp 0x446d90
// auto-matched from its assembly shape

struct T_func_007fad80 { void m(); };
extern T_func_007fad80 G1_func_007fad80;
void func_007fad80()
{
    G1_func_007fad80.m();
}
