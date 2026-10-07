// roc 2008-06 00800830  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800830
//
// 00800830  b968c59700           mov ecx, 0x97c568
// 00800835  e986a3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800830 { void m(); };
extern T_func_00800830 G1_func_00800830;
void func_00800830()
{
    G1_func_00800830.m();
}
