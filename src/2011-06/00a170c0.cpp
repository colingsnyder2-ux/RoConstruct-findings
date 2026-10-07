// roc 2011-06 00a170c0  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a170c0
//
// 00a170c0  68801aa300           push 0xa31a80
// 00a170c5  e89340dfff           call 0x80b15d
// 00a170ca  59                   pop ecx
// 00a170cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a170c0;
extern void G1_func_00a170c0(void*);
void func_00a170c0()
{
    G1_func_00a170c0(&G2_func_00a170c0);
}
