// roc 2009-06 00888810  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888810
//
// 00888810  6870638900           push 0x896370
// 00888815  e8e112e9ff           call 0x719afb
// 0088881a  59                   pop ecx
// 0088881b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888810;
extern void G1_func_00888810(void*);
void func_00888810()
{
    G1_func_00888810(&G2_func_00888810);
}
