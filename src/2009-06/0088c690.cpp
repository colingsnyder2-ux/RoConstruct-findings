// roc 2009-06 0088c690  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c690
//
// 0088c690  68c4818d00           push 0x8d81c4
// 0088c695  e81610d4ff           call 0x5cd6b0
// 0088c69a  83c404               add esp, 4
// 0088c69d  a31cb0a400           mov dword ptr [0xa4b01c], eax
// 0088c6a2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c690(void*);
void func_0088c690()
{
    G1_VALUE = (int*)G2_func_0088c690(&G3_OBJ);
}
