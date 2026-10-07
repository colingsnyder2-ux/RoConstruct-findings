// roc 2010-06 00997850  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997850
//
// 00997850  b9408fc100           mov ecx, 0xc18f40
// 00997855  e966b9b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997850 { void m(); };
extern T_func_00997850 G1_func_00997850;
void func_00997850()
{
    G1_func_00997850.m();
}
