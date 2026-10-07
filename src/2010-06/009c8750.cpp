// roc 2010-06 009c8750  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8750
//
// 009c8750  68e0e09d00           push 0x9de0e0
// 009c8755  e80903deff           call 0x7a8a63
// 009c875a  59                   pop ecx
// 009c875b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8750;
extern void G1_func_009c8750(void*);
void func_009c8750()
{
    G1_func_009c8750(&G2_func_009c8750);
}
