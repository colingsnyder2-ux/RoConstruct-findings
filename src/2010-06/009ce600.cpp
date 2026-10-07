// roc 2010-06 009ce600  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce600
//
// 009ce600  687ce0a200           push 0xa2e07c
// 009ce605  e8365bbcff           call 0x594140
// 009ce60a  83c404               add esp, 4
// 009ce60d  a30493c100           mov dword ptr [0xc19304], eax
// 009ce612  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce600(void*);
void func_009ce600()
{
    G1_VALUE = (int*)G2_func_009ce600(&G3_OBJ);
}
