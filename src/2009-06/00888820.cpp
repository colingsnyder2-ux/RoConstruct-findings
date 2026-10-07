// roc 2009-06 00888820  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888820
//
// 00888820  6880638900           push 0x896380
// 00888825  e8d112e9ff           call 0x719afb
// 0088882a  59                   pop ecx
// 0088882b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888820;
extern void G1_func_00888820(void*);
void func_00888820()
{
    G1_func_00888820(&G2_func_00888820);
}
