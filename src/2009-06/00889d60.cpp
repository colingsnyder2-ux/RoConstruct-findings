// roc 2009-06 00889d60  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889d60
//
// 00889d60  68f8ff8a00           push 0x8afff8
// 00889d65  e84639d4ff           call 0x5cd6b0
// 00889d6a  83c404               add esp, 4
// 00889d6d  a3cc3ea400           mov dword ptr [0xa43ecc], eax
// 00889d72  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00889d60(void*);
void func_00889d60()
{
    G1_VALUE = (int*)G2_func_00889d60(&G3_OBJ);
}
