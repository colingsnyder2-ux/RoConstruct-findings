// roc 2010-06 009c8460  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8460
//
// 009c8460  68c0db9d00           push 0x9ddbc0
// 009c8465  e8f905deff           call 0x7a8a63
// 009c846a  59                   pop ecx
// 009c846b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8460;
extern void G1_func_009c8460(void*);
void func_009c8460()
{
    G1_func_009c8460(&G2_func_009c8460);
}
