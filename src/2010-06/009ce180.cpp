// roc 2010-06 009ce180  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce180
//
// 009ce180  68082fa100           push 0xa12f08
// 009ce185  e8b65fbcff           call 0x594140
// 009ce18a  83c404               add esp, 4
// 009ce18d  a31093c100           mov dword ptr [0xc19310], eax
// 009ce192  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce180(void*);
void func_009ce180()
{
    G1_VALUE = (int*)G2_func_009ce180(&G3_OBJ);
}
