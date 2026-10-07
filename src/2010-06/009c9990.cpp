// roc 2010-06 009c9990  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9990
//
// 009c9990  68149fa200           push 0xa29f14
// 009c9995  e8a6a7bcff           call 0x594140
// 009c999a  83c404               add esp, 4
// 009c999d  a3c4b2c000           mov dword ptr [0xc0b2c4], eax
// 009c99a2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c9990(void*);
void func_009c9990()
{
    G1_VALUE = (int*)G2_func_009c9990(&G3_OBJ);
}
