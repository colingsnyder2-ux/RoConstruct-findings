// roc 2010-06 009ce640  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce640
//
// 009ce640  684ce4a000           push 0xa0e44c
// 009ce645  e8f65abcff           call 0x594140
// 009ce64a  83c404               add esp, 4
// 009ce64d  a38893c100           mov dword ptr [0xc19388], eax
// 009ce652  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce640(void*);
void func_009ce640()
{
    G1_VALUE = (int*)G2_func_009ce640(&G3_OBJ);
}
