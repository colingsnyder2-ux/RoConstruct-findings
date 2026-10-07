// roc 2010-06 009ce320  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce320
//
// 009ce320  6808e0a200           push 0xa2e008
// 009ce325  e8165ebcff           call 0x594140
// 009ce32a  83c404               add esp, 4
// 009ce32d  a3cc92c100           mov dword ptr [0xc192cc], eax
// 009ce332  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce320(void*);
void func_009ce320()
{
    G1_VALUE = (int*)G2_func_009ce320(&G3_OBJ);
}
