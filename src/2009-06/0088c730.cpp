// roc 2009-06 0088c730  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c730
//
// 0088c730  68c4448c00           push 0x8c44c4
// 0088c735  e8760fd4ff           call 0x5cd6b0
// 0088c73a  83c404               add esp, 4
// 0088c73d  a334b0a400           mov dword ptr [0xa4b034], eax
// 0088c742  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c730(void*);
void func_0088c730()
{
    G1_VALUE = (int*)G2_func_0088c730(&G3_OBJ);
}
