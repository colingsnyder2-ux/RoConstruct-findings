// roc 2011-06 00a29320  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a29320
//
// 00a29320  68d0c9a300           push 0xa3c9d0
// 00a29325  e8331edeff           call 0x80b15d
// 00a2932a  59                   pop ecx
// 00a2932b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a29320;
extern void G1_func_00a29320(void*);
void func_00a29320()
{
    G1_func_00a29320(&G2_func_00a29320);
}
