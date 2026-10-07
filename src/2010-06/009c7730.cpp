// roc 2010-06 009c7730  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7730
//
// 009c7730  6830d19d00           push 0x9dd130
// 009c7735  e82913deff           call 0x7a8a63
// 009c773a  59                   pop ecx
// 009c773b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c7730;
extern void G1_func_009c7730(void*);
void func_009c7730()
{
    G1_func_009c7730(&G2_func_009c7730);
}
