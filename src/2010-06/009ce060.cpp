// roc 2010-06 009ce060  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce060
//
// 009ce060  6898dfa200           push 0xa2df98
// 009ce065  e8d660bcff           call 0x594140
// 009ce06a  83c404               add esp, 4
// 009ce06d  a3c092c100           mov dword ptr [0xc192c0], eax
// 009ce072  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce060(void*);
void func_009ce060()
{
    G1_VALUE = (int*)G2_func_009ce060(&G3_OBJ);
}
