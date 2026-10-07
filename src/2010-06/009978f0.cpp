// roc 2010-06 009978f0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009978f0
//
// 009978f0  b9588ec100           mov ecx, 0xc18e58
// 009978f5  e9c6b8b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009978f0 { void m(); };
extern T_func_009978f0 G1_func_009978f0;
void func_009978f0()
{
    G1_func_009978f0.m();
}
