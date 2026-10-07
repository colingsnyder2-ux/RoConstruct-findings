// roc 2009-06 0088c610  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c610
//
// 0088c610  68a0818d00           push 0x8d81a0
// 0088c615  e89610d4ff           call 0x5cd6b0
// 0088c61a  83c404               add esp, 4
// 0088c61d  a3acb0a400           mov dword ptr [0xa4b0ac], eax
// 0088c622  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c610(void*);
void func_0088c610()
{
    G1_VALUE = (int*)G2_func_0088c610(&G3_OBJ);
}
