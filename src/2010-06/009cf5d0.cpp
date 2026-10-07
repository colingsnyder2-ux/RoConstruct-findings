// roc 2010-06 009cf5d0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cf5d0
//
// 009cf5d0  68e02e9e00           push 0x9e2ee0
// 009cf5d5  e88994ddff           call 0x7a8a63
// 009cf5da  59                   pop ecx
// 009cf5db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009cf5d0;
extern void G1_func_009cf5d0(void*);
void func_009cf5d0()
{
    G1_func_009cf5d0(&G2_func_009cf5d0);
}
