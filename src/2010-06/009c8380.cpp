// roc 2010-06 009c8380  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8380
//
// 009c8380  6800db9d00           push 0x9ddb00
// 009c8385  e8d906deff           call 0x7a8a63
// 009c838a  59                   pop ecx
// 009c838b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8380;
extern void G1_func_009c8380(void*);
void func_009c8380()
{
    G1_func_009c8380(&G2_func_009c8380);
}
