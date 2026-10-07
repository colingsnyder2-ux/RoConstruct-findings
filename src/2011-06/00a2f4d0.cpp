// roc 2011-06 00a2f4d0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f4d0
//
// 00a2f4d0  68d0fca300           push 0xa3fcd0
// 00a2f4d5  e883bcddff           call 0x80b15d
// 00a2f4da  59                   pop ecx
// 00a2f4db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2f4d0;
extern void G1_func_00a2f4d0(void*);
void func_00a2f4d0()
{
    G1_func_00a2f4d0(&G2_func_00a2f4d0);
}
