// roc 2010-06 009ce0a0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce0a0
//
// 009ce0a0  68acdfa200           push 0xa2dfac
// 009ce0a5  e89660bcff           call 0x594140
// 009ce0aa  83c404               add esp, 4
// 009ce0ad  a3d892c100           mov dword ptr [0xc192d8], eax
// 009ce0b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce0a0(void*);
void func_009ce0a0()
{
    G1_VALUE = (int*)G2_func_009ce0a0(&G3_OBJ);
}
