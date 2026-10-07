// roc 2010-06 009ce500  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce500
//
// 009ce500  6848e0a200           push 0xa2e048
// 009ce505  e8365cbcff           call 0x594140
// 009ce50a  83c404               add esp, 4
// 009ce50d  a30c93c100           mov dword ptr [0xc1930c], eax
// 009ce512  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce500(void*);
void func_009ce500()
{
    G1_VALUE = (int*)G2_func_009ce500(&G3_OBJ);
}
