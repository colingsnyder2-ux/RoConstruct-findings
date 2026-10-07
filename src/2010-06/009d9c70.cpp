// roc 2010-06 009d9c70  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c70
//
// 009d9c70  6810919e00           push 0x9e9110
// 009d9c75  e8e9eddcff           call 0x7a8a63
// 009d9c7a  59                   pop ecx
// 009d9c7b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d9c70;
extern void G1_func_009d9c70(void*);
void func_009d9c70()
{
    G1_func_009d9c70(&G2_func_009d9c70);
}
