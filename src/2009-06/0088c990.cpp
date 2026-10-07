// roc 2009-06 0088c990  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c990
//
// 0088c990  6830828d00           push 0x8d8230
// 0088c995  e8160dd4ff           call 0x5cd6b0
// 0088c99a  83c404               add esp, 4
// 0088c99d  a3a0b0a400           mov dword ptr [0xa4b0a0], eax
// 0088c9a2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c990(void*);
void func_0088c990()
{
    G1_VALUE = (int*)G2_func_0088c990(&G3_OBJ);
}
