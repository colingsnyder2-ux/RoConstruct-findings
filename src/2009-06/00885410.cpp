// roc 2009-06 00885410  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885410
//
// 00885410  68f0488900           push 0x8948f0
// 00885415  e8e146e9ff           call 0x719afb
// 0088541a  59                   pop ecx
// 0088541b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00885410;
extern void G1_func_00885410(void*);
void func_00885410()
{
    G1_func_00885410(&G2_func_00885410);
}
