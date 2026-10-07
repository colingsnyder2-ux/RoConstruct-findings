// roc 2010-06 009ce2e0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce2e0
//
// 009ce2e0  6800e0a200           push 0xa2e000
// 009ce2e5  e8565ebcff           call 0x594140
// 009ce2ea  83c404               add esp, 4
// 009ce2ed  a3f492c100           mov dword ptr [0xc192f4], eax
// 009ce2f2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce2e0(void*);
void func_009ce2e0()
{
    G1_VALUE = (int*)G2_func_009ce2e0(&G3_OBJ);
}
