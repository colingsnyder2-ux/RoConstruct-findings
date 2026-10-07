// roc 2010-06 009ce0e0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce0e0
//
// 009ce0e0  68c0dfa200           push 0xa2dfc0
// 009ce0e5  e85660bcff           call 0x594140
// 009ce0ea  83c404               add esp, 4
// 009ce0ed  a35493c100           mov dword ptr [0xc19354], eax
// 009ce0f2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce0e0(void*);
void func_009ce0e0()
{
    G1_VALUE = (int*)G2_func_009ce0e0(&G3_OBJ);
}
