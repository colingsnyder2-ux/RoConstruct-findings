// roc 2009-06 0088ca30  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ca30
//
// 0088ca30  6898818d00           push 0x8d8198
// 0088ca35  e8460fd4ff           call 0x5cd980
// 0088ca3a  83c404               add esp, 4
// 0088ca3d  a3b0b0a400           mov dword ptr [0xa4b0b0], eax
// 0088ca42  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088ca30(void*);
void func_0088ca30()
{
    G1_VALUE = (int*)G2_func_0088ca30(&G3_OBJ);
}
