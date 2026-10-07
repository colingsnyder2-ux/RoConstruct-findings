// roc 2010-06 009c8410  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8410
//
// 009c8410  6880db9d00           push 0x9ddb80
// 009c8415  e84906deff           call 0x7a8a63
// 009c841a  59                   pop ecx
// 009c841b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8410;
extern void G1_func_009c8410(void*);
void func_009c8410()
{
    G1_func_009c8410(&G2_func_009c8410);
}
