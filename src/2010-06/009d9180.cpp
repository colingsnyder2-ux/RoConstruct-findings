// roc 2010-06 009d9180  unit: seg_009d0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9180
//
// 009d9180  68b429a500           push 0xa529b4
// 009d9185  e8b6afbbff           call 0x594140
// 009d918a  83c404               add esp, 4
// 009d918d  a3cc32c200           mov dword ptr [0xc232cc], eax
// 009d9192  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009d9180(void*);
void func_009d9180()
{
    G1_VALUE = (int*)G2_func_009d9180(&G3_OBJ);
}
