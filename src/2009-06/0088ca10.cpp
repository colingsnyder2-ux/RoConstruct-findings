// roc 2009-06 0088ca10  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ca10
//
// 0088ca10  6854828d00           push 0x8d8254
// 0088ca15  e8960cd4ff           call 0x5cd6b0
// 0088ca1a  83c404               add esp, 4
// 0088ca1d  a3b4b0a400           mov dword ptr [0xa4b0b4], eax
// 0088ca22  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088ca10(void*);
void func_0088ca10()
{
    G1_VALUE = (int*)G2_func_0088ca10(&G3_OBJ);
}
