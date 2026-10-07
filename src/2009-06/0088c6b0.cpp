// roc 2009-06 0088c6b0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c6b0
//
// 0088c6b0  68cc818d00           push 0x8d81cc
// 0088c6b5  e8f60fd4ff           call 0x5cd6b0
// 0088c6ba  83c404               add esp, 4
// 0088c6bd  a330b0a400           mov dword ptr [0xa4b030], eax
// 0088c6c2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c6b0(void*);
void func_0088c6b0()
{
    G1_VALUE = (int*)G2_func_0088c6b0(&G3_OBJ);
}
