// roc 2008-06 007fae60  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fae60
//
// 007fae60  b9e0db9600           mov ecx, 0x96dbe0
// 007fae65  e9d615c5ff           jmp 0x44c440
// auto-matched from its assembly shape

struct T_func_007fae60 { void m(); };
extern T_func_007fae60 G1_func_007fae60;
void func_007fae60()
{
    G1_func_007fae60.m();
}
