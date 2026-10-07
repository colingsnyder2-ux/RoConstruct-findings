// roc 2010-06 009ce5a0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce5a0
//
// 009ce5a0  6868e0a200           push 0xa2e068
// 009ce5a5  e8965bbcff           call 0x594140
// 009ce5aa  83c404               add esp, 4
// 009ce5ad  a3d492c100           mov dword ptr [0xc192d4], eax
// 009ce5b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce5a0(void*);
void func_009ce5a0()
{
    G1_VALUE = (int*)G2_func_009ce5a0(&G3_OBJ);
}
