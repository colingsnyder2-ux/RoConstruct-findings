// roc 2010-06 009ce660  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce660
//
// 009ce660  6888e0a200           push 0xa2e088
// 009ce665  e8d65abcff           call 0x594140
// 009ce66a  83c404               add esp, 4
// 009ce66d  a30093c100           mov dword ptr [0xc19300], eax
// 009ce672  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce660(void*);
void func_009ce660()
{
    G1_VALUE = (int*)G2_func_009ce660(&G3_OBJ);
}
