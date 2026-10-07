// roc 2009-06 0088c790  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c790
//
// 0088c790  68f4818d00           push 0x8d81f4
// 0088c795  e8160fd4ff           call 0x5cd6b0
// 0088c79a  83c404               add esp, 4
// 0088c79d  a388b0a400           mov dword ptr [0xa4b088], eax
// 0088c7a2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c790(void*);
void func_0088c790()
{
    G1_VALUE = (int*)G2_func_0088c790(&G3_OBJ);
}
