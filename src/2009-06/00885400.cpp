// roc 2009-06 00885400  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885400
//
// 00885400  68b0488900           push 0x8948b0
// 00885405  e8f146e9ff           call 0x719afb
// 0088540a  59                   pop ecx
// 0088540b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00885400;
extern void G1_func_00885400(void*);
void func_00885400()
{
    G1_func_00885400(&G2_func_00885400);
}
