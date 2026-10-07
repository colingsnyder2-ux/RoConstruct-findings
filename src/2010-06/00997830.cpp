// roc 2010-06 00997830  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997830
//
// 00997830  b9788bc100           mov ecx, 0xc18b78
// 00997835  e986b9b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997830 { void m(); };
extern T_func_00997830 G1_func_00997830;
void func_00997830()
{
    G1_func_00997830.m();
}
