// roc 2009-06 0088c930  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c930
//
// 0088c930  6828828d00           push 0x8d8228
// 0088c935  e8760dd4ff           call 0x5cd6b0
// 0088c93a  83c404               add esp, 4
// 0088c93d  a394b0a400           mov dword ptr [0xa4b094], eax
// 0088c942  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c930(void*);
void func_0088c930()
{
    G1_VALUE = (int*)G2_func_0088c930(&G3_OBJ);
}
