// roc 2010-06 009ce440  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce440
//
// 009ce440  6878dfa200           push 0xa2df78
// 009ce445  e8c65fbcff           call 0x594410
// 009ce44a  83c404               add esp, 4
// 009ce44d  a39893c100           mov dword ptr [0xc19398], eax
// 009ce452  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce440(void*);
void func_009ce440()
{
    G1_VALUE = (int*)G2_func_009ce440(&G3_OBJ);
}
