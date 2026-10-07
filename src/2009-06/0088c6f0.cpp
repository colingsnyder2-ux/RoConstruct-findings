// roc 2009-06 0088c6f0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c6f0
//
// 0088c6f0  68e0818d00           push 0x8d81e0
// 0088c6f5  e8b60fd4ff           call 0x5cd6b0
// 0088c6fa  83c404               add esp, 4
// 0088c6fd  a384b0a400           mov dword ptr [0xa4b084], eax
// 0088c702  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c6f0(void*);
void func_0088c6f0()
{
    G1_VALUE = (int*)G2_func_0088c6f0(&G3_OBJ);
}
