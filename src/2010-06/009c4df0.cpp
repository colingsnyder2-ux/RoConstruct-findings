// roc 2010-06 009c4df0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4df0
//
// 009c4df0  6870c09d00           push 0x9dc070
// 009c4df5  e8693cdeff           call 0x7a8a63
// 009c4dfa  59                   pop ecx
// 009c4dfb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c4df0;
extern void G1_func_009c4df0(void*);
void func_009c4df0()
{
    G1_func_009c4df0(&G2_func_009c4df0);
}
