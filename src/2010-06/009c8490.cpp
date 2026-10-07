// roc 2010-06 009c8490  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8490
//
// 009c8490  68f0db9d00           push 0x9ddbf0
// 009c8495  e8c905deff           call 0x7a8a63
// 009c849a  59                   pop ecx
// 009c849b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8490;
extern void G1_func_009c8490(void*);
void func_009c8490()
{
    G1_func_009c8490(&G2_func_009c8490);
}
