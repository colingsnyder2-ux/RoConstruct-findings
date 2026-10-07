// roc 2010-06 009c4420  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4420
//
// 009c4420  6800ba9d00           push 0x9dba00
// 009c4425  e83946deff           call 0x7a8a63
// 009c442a  59                   pop ecx
// 009c442b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c4420;
extern void G1_func_009c4420(void*);
void func_009c4420()
{
    G1_func_009c4420(&G2_func_009c4420);
}
