// roc 2010-06 009ce160  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce160
//
// 009ce160  6814cca200           push 0xa2cc14
// 009ce165  e8d65fbcff           call 0x594140
// 009ce16a  83c404               add esp, 4
// 009ce16d  a33093c100           mov dword ptr [0xc19330], eax
// 009ce172  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce160(void*);
void func_009ce160()
{
    G1_VALUE = (int*)G2_func_009ce160(&G3_OBJ);
}
