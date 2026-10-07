// roc 2009-06 0088c9f0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c9f0
//
// 0088c9f0  684c828d00           push 0x8d824c
// 0088c9f5  e8b60cd4ff           call 0x5cd6b0
// 0088c9fa  83c404               add esp, 4
// 0088c9fd  a368b0a400           mov dword ptr [0xa4b068], eax
// 0088ca02  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c9f0(void*);
void func_0088c9f0()
{
    G1_VALUE = (int*)G2_func_0088c9f0(&G3_OBJ);
}
