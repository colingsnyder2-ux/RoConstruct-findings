// roc 2008-06 007ee750  unit: seg_007e0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee750
//
// 007ee750  6850a07f00           push 0x7fa050
// 007ee755  e85530ebff           call 0x6a17af
// 007ee75a  59                   pop ecx
// 007ee75b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007ee750;
extern void G1_func_007ee750(void*);
void func_007ee750()
{
    G1_func_007ee750(&G2_func_007ee750);
}
