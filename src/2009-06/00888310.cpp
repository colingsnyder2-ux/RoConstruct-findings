// roc 2009-06 00888310  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888310
//
// 00888310  68405f8900           push 0x895f40
// 00888315  e8e117e9ff           call 0x719afb
// 0088831a  59                   pop ecx
// 0088831b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888310;
extern void G1_func_00888310(void*);
void func_00888310()
{
    G1_func_00888310(&G2_func_00888310);
}
