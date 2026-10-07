// roc 2010-06 009c75c0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c75c0
//
// 009c75c0  6810d09d00           push 0x9dd010
// 009c75c5  e89914deff           call 0x7a8a63
// 009c75ca  59                   pop ecx
// 009c75cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c75c0;
extern void G1_func_009c75c0(void*);
void func_009c75c0()
{
    G1_func_009c75c0(&G2_func_009c75c0);
}
