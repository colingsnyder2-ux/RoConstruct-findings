// roc 2009-06 00893880  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893880
//
// 00893880  6800d78900           push 0x89d700
// 00893885  e87162e8ff           call 0x719afb
// 0089388a  59                   pop ecx
// 0089388b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00893880;
extern void G1_func_00893880(void*);
void func_00893880()
{
    G1_func_00893880(&G2_func_00893880);
}
