// roc 2010-06 009ce540  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce540
//
// 009ce540  6850e0a200           push 0xa2e050
// 009ce545  e8f65bbcff           call 0x594140
// 009ce54a  83c404               add esp, 4
// 009ce54d  a38493c100           mov dword ptr [0xc19384], eax
// 009ce552  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce540(void*);
void func_009ce540()
{
    G1_VALUE = (int*)G2_func_009ce540(&G3_OBJ);
}
