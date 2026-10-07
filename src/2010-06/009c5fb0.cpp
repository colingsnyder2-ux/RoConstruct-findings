// roc 2010-06 009c5fb0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5fb0
//
// 009c5fb0  6850c19d00           push 0x9dc150
// 009c5fb5  e8a92adeff           call 0x7a8a63
// 009c5fba  59                   pop ecx
// 009c5fbb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c5fb0;
extern void G1_func_009c5fb0(void*);
void func_009c5fb0()
{
    G1_func_009c5fb0(&G2_func_009c5fb0);
}
