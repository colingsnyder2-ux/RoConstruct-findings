// roc 2010-06 009ce3e0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce3e0
//
// 009ce3e0  6820e0a200           push 0xa2e020
// 009ce3e5  e8565dbcff           call 0x594140
// 009ce3ea  83c404               add esp, 4
// 009ce3ed  a3d092c100           mov dword ptr [0xc192d0], eax
// 009ce3f2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce3e0(void*);
void func_009ce3e0()
{
    G1_VALUE = (int*)G2_func_009ce3e0(&G3_OBJ);
}
