// roc 2010-06 009d9d30  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9d30
//
// 009d9d30  6870919e00           push 0x9e9170
// 009d9d35  e829eddcff           call 0x7a8a63
// 009d9d3a  59                   pop ecx
// 009d9d3b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d9d30;
extern void G1_func_009d9d30(void*);
void func_009d9d30()
{
    G1_func_009d9d30(&G2_func_009d9d30);
}
