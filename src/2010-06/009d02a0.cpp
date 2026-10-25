// from server: 100% by colin
// roc 2010-06 009d02a0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d02a0
//
// 009d02a0  6a00                 push 0
// 009d02a2  6a0f                 push 0xf
// 009d02a4  68b4000000           push 0xb4
// 009d02a9  685c8ea100           push 0xa18e5c
// 009d02ae  687463a300           push 0xa36374
// 009d02b3  b930afc100           mov ecx, 0xc1af30
// 009d02b8  e8833bc6ff           call 0x633e40
// 009d02bd  68a0369e00           push 0x9e36a0
// 009d02c2  e89c87ddff           call 0x7a8a63
// 009d02c7  59                   pop ecx
// 009d02c8  c3                   ret 

extern int g_009d02a0_0;
extern int g_009d02a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d02a0(void*);
struct O_009d02a0 { int m(void*, void*, int, int, int); };
extern O_009d02a0 g_obj_009d02a0;
extern int g_tail_009d02a0;
void func_009d02a0()
{
    g_obj_009d02a0.m((void*)&g_009d02a0_0, (void*)&g_009d02a0_1, 180, 15, 0);
    tail_fn_009d02a0(&g_tail_009d02a0);
}