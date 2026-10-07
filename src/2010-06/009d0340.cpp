// roc 2010-06 009d0340  unit: seg_009d0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0340
//
// 009d0340  68d46ba300           push 0xa36bd4
// 009d0345  e8f63dbcff           call 0x594140
// 009d034a  83c404               add esp, 4
// 009d034d  a3d8b1c100           mov dword ptr [0xc1b1d8], eax
// 009d0352  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009d0340(void*);
void func_009d0340()
{
    G1_VALUE = (int*)G2_func_009d0340(&G3_OBJ);
}
