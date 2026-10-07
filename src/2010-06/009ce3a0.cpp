// roc 2010-06 009ce3a0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce3a0
//
// 009ce3a0  6810e0a200           push 0xa2e010
// 009ce3a5  e8965dbcff           call 0x594140
// 009ce3aa  83c404               add esp, 4
// 009ce3ad  a37893c100           mov dword ptr [0xc19378], eax
// 009ce3b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce3a0(void*);
void func_009ce3a0()
{
    G1_VALUE = (int*)G2_func_009ce3a0(&G3_OBJ);
}
