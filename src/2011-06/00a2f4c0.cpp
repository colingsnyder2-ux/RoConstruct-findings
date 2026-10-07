// roc 2011-06 00a2f4c0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f4c0
//
// 00a2f4c0  68c0fca300           push 0xa3fcc0
// 00a2f4c5  e893bcddff           call 0x80b15d
// 00a2f4ca  59                   pop ecx
// 00a2f4cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2f4c0;
extern void G1_func_00a2f4c0(void*);
void func_00a2f4c0()
{
    G1_func_00a2f4c0(&G2_func_00a2f4c0);
}
