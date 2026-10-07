// roc 2010-06 009ce340  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce340
//
// 009ce340  688430a000           push 0xa03084
// 009ce345  e8f65dbcff           call 0x594140
// 009ce34a  83c404               add esp, 4
// 009ce34d  a36893c100           mov dword ptr [0xc19368], eax
// 009ce352  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce340(void*);
void func_009ce340()
{
    G1_VALUE = (int*)G2_func_009ce340(&G3_OBJ);
}
