// roc 2009-06 0088c7f0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c7f0
//
// 0088c7f0  6800828d00           push 0x8d8200
// 0088c7f5  e8b60ed4ff           call 0x5cd6b0
// 0088c7fa  83c404               add esp, 4
// 0088c7fd  a33cb0a400           mov dword ptr [0xa4b03c], eax
// 0088c802  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c7f0(void*);
void func_0088c7f0()
{
    G1_VALUE = (int*)G2_func_0088c7f0(&G3_OBJ);
}
