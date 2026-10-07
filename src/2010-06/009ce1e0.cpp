// roc 2010-06 009ce1e0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce1e0
//
// 009ce1e0  680c91a000           push 0xa0910c
// 009ce1e5  e8565fbcff           call 0x594140
// 009ce1ea  83c404               add esp, 4
// 009ce1ed  a38c93c100           mov dword ptr [0xc1938c], eax
// 009ce1f2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce1e0(void*);
void func_009ce1e0()
{
    G1_VALUE = (int*)G2_func_009ce1e0(&G3_OBJ);
}
