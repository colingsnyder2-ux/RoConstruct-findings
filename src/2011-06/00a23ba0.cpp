// roc 2011-06 00a23ba0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a23ba0
//
// 00a23ba0  68d0a4a300           push 0xa3a4d0
// 00a23ba5  e8b375deff           call 0x80b15d
// 00a23baa  59                   pop ecx
// 00a23bab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a23ba0;
extern void G1_func_00a23ba0(void*);
void func_00a23ba0()
{
    G1_func_00a23ba0(&G2_func_00a23ba0);
}
