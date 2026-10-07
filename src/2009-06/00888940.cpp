// roc 2009-06 00888940  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888940
//
// 00888940  6890648900           push 0x896490
// 00888945  e8b111e9ff           call 0x719afb
// 0088894a  59                   pop ecx
// 0088894b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888940;
extern void G1_func_00888940(void*);
void func_00888940()
{
    G1_func_00888940(&G2_func_00888940);
}
