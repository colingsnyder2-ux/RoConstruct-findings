// roc 2010-06 009c4c40  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4c40
//
// 009c4c40  68dc2ea100           push 0xa12edc
// 009c4c45  e8f6f4bcff           call 0x594140
// 009c4c4a  83c404               add esp, 4
// 009c4c4d  a34c30c000           mov dword ptr [0xc0304c], eax
// 009c4c52  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4c40(void*);
void func_009c4c40()
{
    G1_VALUE = (int*)G2_func_009c4c40(&G3_OBJ);
}
