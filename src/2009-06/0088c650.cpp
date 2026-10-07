// roc 2009-06 0088c650  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c650
//
// 0088c650  68ac818d00           push 0x8d81ac
// 0088c655  e85610d4ff           call 0x5cd6b0
// 0088c65a  83c404               add esp, 4
// 0088c65d  a350b0a400           mov dword ptr [0xa4b050], eax
// 0088c662  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c650(void*);
void func_0088c650()
{
    G1_VALUE = (int*)G2_func_0088c650(&G3_OBJ);
}
