// roc 2009-06 0088ca50  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ca50
//
// 0088ca50  685c828d00           push 0x8d825c
// 0088ca55  e8560cd4ff           call 0x5cd6b0
// 0088ca5a  83c404               add esp, 4
// 0088ca5d  a3a4b0a400           mov dword ptr [0xa4b0a4], eax
// 0088ca62  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088ca50(void*);
void func_0088ca50()
{
    G1_VALUE = (int*)G2_func_0088ca50(&G3_OBJ);
}
