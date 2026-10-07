// roc 2010-06 009ce4c0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce4c0
//
// 009ce4c0  6840e0a200           push 0xa2e040
// 009ce4c5  e8765cbcff           call 0x594140
// 009ce4ca  83c404               add esp, 4
// 009ce4cd  a32093c100           mov dword ptr [0xc19320], eax
// 009ce4d2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce4c0(void*);
void func_009ce4c0()
{
    G1_VALUE = (int*)G2_func_009ce4c0(&G3_OBJ);
}
