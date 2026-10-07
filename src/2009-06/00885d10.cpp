// roc 2009-06 00885d10  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885d10
//
// 00885d10  68c04e8900           push 0x894ec0
// 00885d15  e8e13de9ff           call 0x719afb
// 00885d1a  59                   pop ecx
// 00885d1b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00885d10;
extern void G1_func_00885d10(void*);
void func_00885d10()
{
    G1_func_00885d10(&G2_func_00885d10);
}
