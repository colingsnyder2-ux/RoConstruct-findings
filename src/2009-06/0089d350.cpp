// roc 2009-06 0089d350  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d350
//
// 0089d350  b97019a500           mov ecx, 0xa51970
// 0089d355  e916aee9ff           jmp 0x738170
// auto-matched from its assembly shape

struct T_func_0089d350 { void m(); };
extern T_func_0089d350 G1_func_0089d350;
void func_0089d350()
{
    G1_func_0089d350.m();
}
