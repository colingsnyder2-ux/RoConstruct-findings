// roc 2010-06 009ce4e0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce4e0
//
// 009ce4e0  6844e0a200           push 0xa2e044
// 009ce4e5  e8565cbcff           call 0x594140
// 009ce4ea  83c404               add esp, 4
// 009ce4ed  a39093c100           mov dword ptr [0xc19390], eax
// 009ce4f2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce4e0(void*);
void func_009ce4e0()
{
    G1_VALUE = (int*)G2_func_009ce4e0(&G3_OBJ);
}
