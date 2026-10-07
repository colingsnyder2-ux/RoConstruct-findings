// roc 2009-06 00888800  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888800
//
// 00888800  6860638900           push 0x896360
// 00888805  e8f112e9ff           call 0x719afb
// 0088880a  59                   pop ecx
// 0088880b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888800;
extern void G1_func_00888800(void*);
void func_00888800()
{
    G1_func_00888800(&G2_func_00888800);
}
