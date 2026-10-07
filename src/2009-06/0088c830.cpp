// roc 2009-06 0088c830  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c830
//
// 0088c830  6808828d00           push 0x8d8208
// 0088c835  e8760ed4ff           call 0x5cd6b0
// 0088c83a  83c404               add esp, 4
// 0088c83d  a38cb0a400           mov dword ptr [0xa4b08c], eax
// 0088c842  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c830(void*);
void func_0088c830()
{
    G1_VALUE = (int*)G2_func_0088c830(&G3_OBJ);
}
