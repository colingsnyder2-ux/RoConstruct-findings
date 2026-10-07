// roc 2010-06 009ce020  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce020
//
// 009ce020  6884dfa200           push 0xa2df84
// 009ce025  e81661bcff           call 0x594140
// 009ce02a  83c404               add esp, 4
// 009ce02d  a37093c100           mov dword ptr [0xc19370], eax
// 009ce032  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce020(void*);
void func_009ce020()
{
    G1_VALUE = (int*)G2_func_009ce020(&G3_OBJ);
}
