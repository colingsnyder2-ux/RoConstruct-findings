// roc 2008-06 00800890  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800890
//
// 00800890  b948c29700           mov ecx, 0x97c248
// 00800895  e926a3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800890 { void m(); };
extern T_func_00800890 G1_func_00800890;
void func_00800890()
{
    G1_func_00800890.m();
}
