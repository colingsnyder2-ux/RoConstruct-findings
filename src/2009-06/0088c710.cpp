// roc 2009-06 0088c710  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c710
//
// 0088c710  68e8818d00           push 0x8d81e8
// 0088c715  e8960fd4ff           call 0x5cd6b0
// 0088c71a  83c404               add esp, 4
// 0088c71d  a37cb0a400           mov dword ptr [0xa4b07c], eax
// 0088c722  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c710(void*);
void func_0088c710()
{
    G1_VALUE = (int*)G2_func_0088c710(&G3_OBJ);
}
