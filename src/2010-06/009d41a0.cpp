// from server: 100% by colin
// roc 2010-06 009d41a0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d41a0
//
// 009d41a0  6a00                 push 0
// 009d41a2  6a0f                 push 0xf
// 009d41a4  6894000000           push 0x94
// 009d41a9  68d403a300           push 0xa303d4
// 009d41ae  6888f5a300           push 0xa3f588
// 009d41b3  b994e9c100           mov ecx, 0xc1e994
// 009d41b8  e8f379ccff           call 0x69bbb0
// 009d41bd  68e0599e00           push 0x9e59e0
// 009d41c2  e89c48ddff           call 0x7a8a63
// 009d41c7  59                   pop ecx
// 009d41c8  c3                   ret 

extern int g_009d41a0_0;
extern int g_009d41a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d41a0(void*);
struct O_009d41a0 { int m(void*, void*, int, int, int); };
extern O_009d41a0 g_obj_009d41a0;
extern int g_tail_009d41a0;
void func_009d41a0()
{
    g_obj_009d41a0.m((void*)&g_009d41a0_0, (void*)&g_009d41a0_1, 148, 15, 0);
    tail_fn_009d41a0(&g_tail_009d41a0);
}