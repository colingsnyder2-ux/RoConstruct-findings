// roc 2010-06 009c7d70  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7d70
//
// 009c7d70  6850d59d00           push 0x9dd550
// 009c7d75  e8e90cdeff           call 0x7a8a63
// 009c7d7a  59                   pop ecx
// 009c7d7b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c7d70;
extern void G1_func_009c7d70(void*);
void func_009c7d70()
{
    G1_func_009c7d70(&G2_func_009c7d70);
}
