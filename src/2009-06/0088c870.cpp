// roc 2009-06 0088c870  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c870
//
// 0088c870  6810828d00           push 0x8d8210
// 0088c875  e8360ed4ff           call 0x5cd6b0
// 0088c87a  83c404               add esp, 4
// 0088c87d  a34cb0a400           mov dword ptr [0xa4b04c], eax
// 0088c882  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c870(void*);
void func_0088c870()
{
    G1_VALUE = (int*)G2_func_0088c870(&G3_OBJ);
}
