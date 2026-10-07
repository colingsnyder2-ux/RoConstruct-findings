// roc 2010-06 009c6d40  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c6d40
//
// 009c6d40  68c0ca9d00           push 0x9dcac0
// 009c6d45  e8191ddeff           call 0x7a8a63
// 009c6d4a  59                   pop ecx
// 009c6d4b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c6d40;
extern void G1_func_009c6d40(void*);
void func_009c6d40()
{
    G1_func_009c6d40(&G2_func_009c6d40);
}
