// roc 2010-06 00997890  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997890
//
// 00997890  b9388bc100           mov ecx, 0xc18b38
// 00997895  e926b9b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997890 { void m(); };
extern T_func_00997890 G1_func_00997890;
void func_00997890()
{
    G1_func_00997890.m();
}
