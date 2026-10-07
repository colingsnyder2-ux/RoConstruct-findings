// roc 2009-06 0088ca70  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ca70
//
// 0088ca70  6868828d00           push 0x8d8268
// 0088ca75  e8360cd4ff           call 0x5cd6b0
// 0088ca7a  83c404               add esp, 4
// 0088ca7d  a354b0a400           mov dword ptr [0xa4b054], eax
// 0088ca82  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088ca70(void*);
void func_0088ca70()
{
    G1_VALUE = (int*)G2_func_0088ca70(&G3_OBJ);
}
