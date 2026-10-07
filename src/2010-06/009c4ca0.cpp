// roc 2010-06 009c4ca0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4ca0
//
// 009c4ca0  68002fa100           push 0xa12f00
// 009c4ca5  e896f4bcff           call 0x594140
// 009c4caa  83c404               add esp, 4
// 009c4cad  a35830c000           mov dword ptr [0xc03058], eax
// 009c4cb2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4ca0(void*);
void func_009c4ca0()
{
    G1_VALUE = (int*)G2_func_009c4ca0(&G3_OBJ);
}
