// roc 2009-06 0089d590  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d590
//
// 0089d590  b9a826a500           mov ecx, 0xa526a8
// 0089d595  e996ecefff           jmp 0x79c230
// auto-matched from its assembly shape

struct T_func_0089d590 { void m(); };
extern T_func_0089d590 G1_func_0089d590;
void func_0089d590()
{
    G1_func_0089d590.m();
}
