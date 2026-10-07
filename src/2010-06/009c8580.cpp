// roc 2010-06 009c8580  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8580
//
// 009c8580  6850dc9d00           push 0x9ddc50
// 009c8585  e8d904deff           call 0x7a8a63
// 009c858a  59                   pop ecx
// 009c858b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8580;
extern void G1_func_009c8580(void*);
void func_009c8580()
{
    G1_func_009c8580(&G2_func_009c8580);
}
