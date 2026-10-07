// roc 2009-06 0088c670  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c670
//
// 0088c670  68b8818d00           push 0x8d81b8
// 0088c675  e83610d4ff           call 0x5cd6b0
// 0088c67a  83c404               add esp, 4
// 0088c67d  a318b0a400           mov dword ptr [0xa4b018], eax
// 0088c682  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c670(void*);
void func_0088c670()
{
    G1_VALUE = (int*)G2_func_0088c670(&G3_OBJ);
}
