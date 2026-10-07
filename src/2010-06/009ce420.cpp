// roc 2010-06 009ce420  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce420
//
// 009ce420  686c8fa100           push 0xa18f6c
// 009ce425  e8165dbcff           call 0x594140
// 009ce42a  83c404               add esp, 4
// 009ce42d  a39c93c100           mov dword ptr [0xc1939c], eax
// 009ce432  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce420(void*);
void func_009ce420()
{
    G1_VALUE = (int*)G2_func_009ce420(&G3_OBJ);
}
