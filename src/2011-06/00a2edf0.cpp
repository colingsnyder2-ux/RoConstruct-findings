// roc 2011-06 00a2edf0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2edf0
//
// 00a2edf0  6840fba300           push 0xa3fb40
// 00a2edf5  e863c3ddff           call 0x80b15d
// 00a2edfa  59                   pop ecx
// 00a2edfb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2edf0;
extern void G1_func_00a2edf0(void*);
void func_00a2edf0()
{
    G1_func_00a2edf0(&G2_func_00a2edf0);
}
