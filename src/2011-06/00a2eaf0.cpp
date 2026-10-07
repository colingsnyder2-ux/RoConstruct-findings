// roc 2011-06 00a2eaf0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2eaf0
//
// 00a2eaf0  6890f9a300           push 0xa3f990
// 00a2eaf5  e863c6ddff           call 0x80b15d
// 00a2eafa  59                   pop ecx
// 00a2eafb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2eaf0;
extern void G1_func_00a2eaf0(void*);
void func_00a2eaf0()
{
    G1_func_00a2eaf0(&G2_func_00a2eaf0);
}
