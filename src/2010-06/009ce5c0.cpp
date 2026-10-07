// roc 2010-06 009ce5c0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce5c0
//
// 009ce5c0  685ca9a200           push 0xa2a95c
// 009ce5c5  e8765bbcff           call 0x594140
// 009ce5ca  83c404               add esp, 4
// 009ce5cd  a37c93c100           mov dword ptr [0xc1937c], eax
// 009ce5d2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce5c0(void*);
void func_009ce5c0()
{
    G1_VALUE = (int*)G2_func_009ce5c0(&G3_OBJ);
}
