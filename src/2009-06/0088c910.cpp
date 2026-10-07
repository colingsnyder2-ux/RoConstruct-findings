// roc 2009-06 0088c910  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c910
//
// 0088c910  6824828d00           push 0x8d8224
// 0088c915  e8960dd4ff           call 0x5cd6b0
// 0088c91a  83c404               add esp, 4
// 0088c91d  a324b0a400           mov dword ptr [0xa4b024], eax
// 0088c922  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c910(void*);
void func_0088c910()
{
    G1_VALUE = (int*)G2_func_0088c910(&G3_OBJ);
}
