// roc 2010-06 009c2be0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c2be0
//
// 009c2be0  68f0a89d00           push 0x9da8f0
// 009c2be5  e8795edeff           call 0x7a8a63
// 009c2bea  59                   pop ecx
// 009c2beb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c2be0;
extern void G1_func_009c2be0(void*);
void func_009c2be0()
{
    G1_func_009c2be0(&G2_func_009c2be0);
}
