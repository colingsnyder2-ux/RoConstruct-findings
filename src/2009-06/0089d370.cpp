// roc 2009-06 0089d370  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d370
//
// 0089d370  b9641aa500           mov ecx, 0xa51a64
// 0089d375  e98668eaff           jmp 0x743c00
// auto-matched from its assembly shape

struct T_func_0089d370 { void m(); };
extern T_func_0089d370 G1_func_0089d370;
void func_0089d370()
{
    G1_func_0089d370.m();
}
