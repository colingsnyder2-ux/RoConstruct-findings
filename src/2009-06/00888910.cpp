// roc 2009-06 00888910  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888910
//
// 00888910  6860648900           push 0x896460
// 00888915  e8e111e9ff           call 0x719afb
// 0088891a  59                   pop ecx
// 0088891b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888910;
extern void G1_func_00888910(void*);
void func_00888910()
{
    G1_func_00888910(&G2_func_00888910);
}
