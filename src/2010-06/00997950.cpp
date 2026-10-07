// roc 2010-06 00997950  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997950
//
// 00997950  b91c8ac100           mov ecx, 0xc18a1c
// 00997955  e966b8b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997950 { void m(); };
extern T_func_00997950 G1_func_00997950;
void func_00997950()
{
    G1_func_00997950.m();
}
