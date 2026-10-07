// roc 2009-06 00889d80  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889d80
//
// 00889d80  6880518d00           push 0x8d5180
// 00889d85  e82639d4ff           call 0x5cd6b0
// 00889d8a  83c404               add esp, 4
// 00889d8d  a3603ca400           mov dword ptr [0xa43c60], eax
// 00889d92  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00889d80(void*);
void func_00889d80()
{
    G1_VALUE = (int*)G2_func_00889d80(&G3_OBJ);
}
