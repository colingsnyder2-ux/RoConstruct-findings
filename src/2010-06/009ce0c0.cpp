// roc 2010-06 009ce0c0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce0c0
//
// 009ce0c0  68b8dfa200           push 0xa2dfb8
// 009ce0c5  e87660bcff           call 0x594140
// 009ce0ca  83c404               add esp, 4
// 009ce0cd  a37493c100           mov dword ptr [0xc19374], eax
// 009ce0d2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce0c0(void*);
void func_009ce0c0()
{
    G1_VALUE = (int*)G2_func_009ce0c0(&G3_OBJ);
}
