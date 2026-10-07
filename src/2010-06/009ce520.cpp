// roc 2010-06 009ce520  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce520
//
// 009ce520  684ce0a200           push 0xa2e04c
// 009ce525  e8165cbcff           call 0x594140
// 009ce52a  83c404               add esp, 4
// 009ce52d  a36093c100           mov dword ptr [0xc19360], eax
// 009ce532  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce520(void*);
void func_009ce520()
{
    G1_VALUE = (int*)G2_func_009ce520(&G3_OBJ);
}
