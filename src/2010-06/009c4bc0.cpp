// roc 2010-06 009c4bc0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4bc0
//
// 009c4bc0  68a82ea100           push 0xa12ea8
// 009c4bc5  e876f5bcff           call 0x594140
// 009c4bca  83c404               add esp, 4
// 009c4bcd  a33c30c000           mov dword ptr [0xc0303c], eax
// 009c4bd2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4bc0(void*);
void func_009c4bc0()
{
    G1_VALUE = (int*)G2_func_009c4bc0(&G3_OBJ);
}
