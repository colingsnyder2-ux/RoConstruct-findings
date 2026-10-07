// roc 2011-06 00a2f4b0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f4b0
//
// 00a2f4b0  6880fca300           push 0xa3fc80
// 00a2f4b5  e8a3bcddff           call 0x80b15d
// 00a2f4ba  59                   pop ecx
// 00a2f4bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2f4b0;
extern void G1_func_00a2f4b0(void*);
void func_00a2f4b0()
{
    G1_func_00a2f4b0(&G2_func_00a2f4b0);
}
