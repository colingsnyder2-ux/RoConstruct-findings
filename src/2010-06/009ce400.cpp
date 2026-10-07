// roc 2010-06 009ce400  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce400
//
// 009ce400  682ce0a200           push 0xa2e02c
// 009ce405  e8365dbcff           call 0x594140
// 009ce40a  83c404               add esp, 4
// 009ce40d  a32493c100           mov dword ptr [0xc19324], eax
// 009ce412  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce400(void*);
void func_009ce400()
{
    G1_VALUE = (int*)G2_func_009ce400(&G3_OBJ);
}
