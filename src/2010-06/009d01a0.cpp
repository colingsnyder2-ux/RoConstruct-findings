// from server: 100% by colin
// roc 2010-06 009d01a0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d01a0
//
// 009d01a0  6a00                 push 0
// 009d01a2  6a0f                 push 0xf
// 009d01a4  68a1000000           push 0xa1
// 009d01a9  6820e7a000           push 0xa0e720
// 009d01ae  686860a300           push 0xa36068
// 009d01b3  b9f0aec100           mov ecx, 0xc1aef0
// 009d01b8  e86322c6ff           call 0x632420
// 009d01bd  6830369e00           push 0x9e3630
// 009d01c2  e89c88ddff           call 0x7a8a63
// 009d01c7  59                   pop ecx
// 009d01c8  c3                   ret 

extern int g_009d01a0_0;
extern int g_009d01a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d01a0(void*);
struct O_009d01a0 { int m(void*, void*, int, int, int); };
extern O_009d01a0 g_obj_009d01a0;
extern int g_tail_009d01a0;
void func_009d01a0()
{
    g_obj_009d01a0.m((void*)&g_009d01a0_0, (void*)&g_009d01a0_1, 161, 15, 0);
    tail_fn_009d01a0(&g_tail_009d01a0);
}