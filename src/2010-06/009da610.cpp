// roc 2010-06 009da610  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da610
//
// 009da610  6880939e00           push 0x9e9380
// 009da615  e849e4dcff           call 0x7a8a63
// 009da61a  59                   pop ecx
// 009da61b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009da610;
extern void G1_func_009da610(void*);
void func_009da610()
{
    G1_func_009da610(&G2_func_009da610);
}
