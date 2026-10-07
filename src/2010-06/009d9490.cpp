// roc 2010-06 009d9490  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9490
//
// 009d9490  68f08e9e00           push 0x9e8ef0
// 009d9495  e8c9f5dcff           call 0x7a8a63
// 009d949a  59                   pop ecx
// 009d949b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d9490;
extern void G1_func_009d9490(void*);
void func_009d9490()
{
    G1_func_009d9490(&G2_func_009d9490);
}
