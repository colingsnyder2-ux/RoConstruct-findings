// roc 2010-06 009ce300  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce300
//
// 009ce300  6804e0a200           push 0xa2e004
// 009ce305  e8365ebcff           call 0x594140
// 009ce30a  83c404               add esp, 4
// 009ce30d  a3ec92c100           mov dword ptr [0xc192ec], eax
// 009ce312  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce300(void*);
void func_009ce300()
{
    G1_VALUE = (int*)G2_func_009ce300(&G3_OBJ);
}
