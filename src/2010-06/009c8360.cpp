// roc 2010-06 009c8360  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8360
//
// 009c8360  68d0da9d00           push 0x9ddad0
// 009c8365  e8f906deff           call 0x7a8a63
// 009c836a  59                   pop ecx
// 009c836b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8360;
extern void G1_func_009c8360(void*);
void func_009c8360()
{
    G1_func_009c8360(&G2_func_009c8360);
}
