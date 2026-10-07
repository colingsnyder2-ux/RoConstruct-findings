// roc 2010-06 009ce260  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce260
//
// 009ce260  68f0dfa200           push 0xa2dff0
// 009ce265  e8d65ebcff           call 0x594140
// 009ce26a  83c404               add esp, 4
// 009ce26d  a3c892c100           mov dword ptr [0xc192c8], eax
// 009ce272  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce260(void*);
void func_009ce260()
{
    G1_VALUE = (int*)G2_func_009ce260(&G3_OBJ);
}
