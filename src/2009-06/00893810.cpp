// roc 2009-06 00893810  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893810
//
// 00893810  6850d68900           push 0x89d650
// 00893815  e8e162e8ff           call 0x719afb
// 0089381a  59                   pop ecx
// 0089381b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00893810;
extern void G1_func_00893810(void*);
void func_00893810()
{
    G1_func_00893810(&G2_func_00893810);
}
