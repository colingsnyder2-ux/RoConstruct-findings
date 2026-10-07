// roc 2009-06 00885900  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885900
//
// 00885900  689cd88b00           push 0x8bd89c
// 00885905  e8a67dd4ff           call 0x5cd6b0
// 0088590a  83c404               add esp, 4
// 0088590d  a3f4c4a300           mov dword ptr [0xa3c4f4], eax
// 00885912  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885900(void*);
void func_00885900()
{
    G1_VALUE = (int*)G2_func_00885900(&G3_OBJ);
}
