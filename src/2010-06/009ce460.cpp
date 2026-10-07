// roc 2010-06 009ce460  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce460
//
// 009ce460  6834e0a200           push 0xa2e034
// 009ce465  e8d65cbcff           call 0x594140
// 009ce46a  83c404               add esp, 4
// 009ce46d  a38093c100           mov dword ptr [0xc19380], eax
// 009ce472  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce460(void*);
void func_009ce460()
{
    G1_VALUE = (int*)G2_func_009ce460(&G3_OBJ);
}
