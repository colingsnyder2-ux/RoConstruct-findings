// roc 2010-06 009cdfe0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cdfe0
//
// 009cdfe0  6878dfa200           push 0xa2df78
// 009cdfe5  e85661bcff           call 0x594140
// 009cdfea  83c404               add esp, 4
// 009cdfed  a3e892c100           mov dword ptr [0xc192e8], eax
// 009cdff2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009cdfe0(void*);
void func_009cdfe0()
{
    G1_VALUE = (int*)G2_func_009cdfe0(&G3_OBJ);
}
