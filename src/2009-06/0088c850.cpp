// roc 2009-06 0088c850  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c850
//
// 0088c850  680c828d00           push 0x8d820c
// 0088c855  e8560ed4ff           call 0x5cd6b0
// 0088c85a  83c404               add esp, 4
// 0088c85d  a320b0a400           mov dword ptr [0xa4b020], eax
// 0088c862  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c850(void*);
void func_0088c850()
{
    G1_VALUE = (int*)G2_func_0088c850(&G3_OBJ);
}
