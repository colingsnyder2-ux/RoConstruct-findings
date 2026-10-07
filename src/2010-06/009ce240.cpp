// roc 2010-06 009ce240  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce240
//
// 009ce240  68ecdfa200           push 0xa2dfec
// 009ce245  e8f65ebcff           call 0x594140
// 009ce24a  83c404               add esp, 4
// 009ce24d  a35c93c100           mov dword ptr [0xc1935c], eax
// 009ce252  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce240(void*);
void func_009ce240()
{
    G1_VALUE = (int*)G2_func_009ce240(&G3_OBJ);
}
