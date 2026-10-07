// roc 2009-06 0088e4a0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e4a0
//
// 0088e4a0  68e4f88d00           push 0x8df8e4
// 0088e4a5  e806f2d3ff           call 0x5cd6b0
// 0088e4aa  83c404               add esp, 4
// 0088e4ad  a30ccea400           mov dword ptr [0xa4ce0c], eax
// 0088e4b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088e4a0(void*);
void func_0088e4a0()
{
    G1_VALUE = (int*)G2_func_0088e4a0(&G3_OBJ);
}
