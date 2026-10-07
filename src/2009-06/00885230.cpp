// roc 2009-06 00885230  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885230
//
// 00885230  6890488900           push 0x894890
// 00885235  e8c148e9ff           call 0x719afb
// 0088523a  59                   pop ecx
// 0088523b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00885230;
extern void G1_func_00885230(void*);
void func_00885230()
{
    G1_func_00885230(&G2_func_00885230);
}
