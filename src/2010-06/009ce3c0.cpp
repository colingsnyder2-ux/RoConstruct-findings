// roc 2010-06 009ce3c0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce3c0
//
// 009ce3c0  6818e0a200           push 0xa2e018
// 009ce3c5  e8765dbcff           call 0x594140
// 009ce3ca  83c404               add esp, 4
// 009ce3cd  a34c93c100           mov dword ptr [0xc1934c], eax
// 009ce3d2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce3c0(void*);
void func_009ce3c0()
{
    G1_VALUE = (int*)G2_func_009ce3c0(&G3_OBJ);
}
