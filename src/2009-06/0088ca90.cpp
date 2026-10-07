// roc 2009-06 0088ca90  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ca90
//
// 0088ca90  687c82a000           push 0xa0827c
// 0088ca95  e8160cd4ff           call 0x5cd6b0
// 0088ca9a  83c404               add esp, 4
// 0088ca9d  a368b1a400           mov dword ptr [0xa4b168], eax
// 0088caa2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088ca90(void*);
void func_0088ca90()
{
    G1_VALUE = (int*)G2_func_0088ca90(&G3_OBJ);
}
