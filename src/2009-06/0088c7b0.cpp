// roc 2009-06 0088c7b0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c7b0
//
// 0088c7b0  6874ab8b00           push 0x8bab74
// 0088c7b5  e8f60ed4ff           call 0x5cd6b0
// 0088c7ba  83c404               add esp, 4
// 0088c7bd  a358b0a400           mov dword ptr [0xa4b058], eax
// 0088c7c2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c7b0(void*);
void func_0088c7b0()
{
    G1_VALUE = (int*)G2_func_0088c7b0(&G3_OBJ);
}
