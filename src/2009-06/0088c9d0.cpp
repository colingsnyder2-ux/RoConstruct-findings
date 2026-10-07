// roc 2009-06 0088c9d0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c9d0
//
// 0088c9d0  6840828d00           push 0x8d8240
// 0088c9d5  e8d60cd4ff           call 0x5cd6b0
// 0088c9da  83c404               add esp, 4
// 0088c9dd  a328b0a400           mov dword ptr [0xa4b028], eax
// 0088c9e2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c9d0(void*);
void func_0088c9d0()
{
    G1_VALUE = (int*)G2_func_0088c9d0(&G3_OBJ);
}
