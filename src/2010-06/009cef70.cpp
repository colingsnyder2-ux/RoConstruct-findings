// roc 2010-06 009cef70  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cef70
//
// 009cef70  68902b9e00           push 0x9e2b90
// 009cef75  e8e99addff           call 0x7a8a63
// 009cef7a  59                   pop ecx
// 009cef7b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009cef70;
extern void G1_func_009cef70(void*);
void func_009cef70()
{
    G1_func_009cef70(&G2_func_009cef70);
}
