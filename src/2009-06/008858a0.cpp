// roc 2009-06 008858a0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008858a0
//
// 008858a0  6870d88b00           push 0x8bd870
// 008858a5  e8067ed4ff           call 0x5cd6b0
// 008858aa  83c404               add esp, 4
// 008858ad  a3e8c4a300           mov dword ptr [0xa3c4e8], eax
// 008858b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_008858a0(void*);
void func_008858a0()
{
    G1_VALUE = (int*)G2_func_008858a0(&G3_OBJ);
}
