// roc 2009-06 0088c7d0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c7d0
//
// 0088c7d0  68fc818d00           push 0x8d81fc
// 0088c7d5  e8d60ed4ff           call 0x5cd6b0
// 0088c7da  83c404               add esp, 4
// 0088c7dd  a3a8b0a400           mov dword ptr [0xa4b0a8], eax
// 0088c7e2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c7d0(void*);
void func_0088c7d0()
{
    G1_VALUE = (int*)G2_func_0088c7d0(&G3_OBJ);
}
