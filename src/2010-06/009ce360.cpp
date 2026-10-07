// roc 2010-06 009ce360  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce360
//
// 009ce360  680ce0a200           push 0xa2e00c
// 009ce365  e8d65dbcff           call 0x594140
// 009ce36a  83c404               add esp, 4
// 009ce36d  a31493c100           mov dword ptr [0xc19314], eax
// 009ce372  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce360(void*);
void func_009ce360()
{
    G1_VALUE = (int*)G2_func_009ce360(&G3_OBJ);
}
