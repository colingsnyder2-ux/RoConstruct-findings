// roc 2010-06 009ce4a0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce4a0
//
// 009ce4a0  688030a000           push 0xa03080
// 009ce4a5  e8965cbcff           call 0x594140
// 009ce4aa  83c404               add esp, 4
// 009ce4ad  a33c93c100           mov dword ptr [0xc1933c], eax
// 009ce4b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce4a0(void*);
void func_009ce4a0()
{
    G1_VALUE = (int*)G2_func_009ce4a0(&G3_OBJ);
}
