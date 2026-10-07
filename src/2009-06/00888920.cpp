// roc 2009-06 00888920  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888920
//
// 00888920  6870648900           push 0x896470
// 00888925  e8d111e9ff           call 0x719afb
// 0088892a  59                   pop ecx
// 0088892b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888920;
extern void G1_func_00888920(void*);
void func_00888920()
{
    G1_func_00888920(&G2_func_00888920);
}
