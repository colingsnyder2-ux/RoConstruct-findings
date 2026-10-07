// roc 2010-06 009da620  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da620
//
// 009da620  68c0939e00           push 0x9e93c0
// 009da625  e839e4dcff           call 0x7a8a63
// 009da62a  59                   pop ecx
// 009da62b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009da620;
extern void G1_func_009da620(void*);
void func_009da620()
{
    G1_func_009da620(&G2_func_009da620);
}
