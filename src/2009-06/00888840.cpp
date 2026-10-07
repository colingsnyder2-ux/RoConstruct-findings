// roc 2009-06 00888840  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888840
//
// 00888840  68c0638900           push 0x8963c0
// 00888845  e8b112e9ff           call 0x719afb
// 0088884a  59                   pop ecx
// 0088884b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888840;
extern void G1_func_00888840(void*);
void func_00888840()
{
    G1_func_00888840(&G2_func_00888840);
}
