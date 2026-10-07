// roc 2011-06 00a2edd0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2edd0
//
// 00a2edd0  68e0faa300           push 0xa3fae0
// 00a2edd5  e883c3ddff           call 0x80b15d
// 00a2edda  59                   pop ecx
// 00a2eddb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2edd0;
extern void G1_func_00a2edd0(void*);
void func_00a2edd0()
{
    G1_func_00a2edd0(&G2_func_00a2edd0);
}
