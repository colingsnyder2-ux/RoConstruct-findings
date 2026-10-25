// from server: 100% by colin
// roc 2010-06 009d3b20  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d3b20
//
// 009d3b20  6a01                 push 1
// 009d3b22  6a00                 push 0
// 009d3b24  6890e0a300           push 0xa3e090
// 009d3b29  6880e0a300           push 0xa3e080
// 009d3b2e  683c020000           push 0x23c
// 009d3b33  b950e6c100           mov ecx, 0xc1e650
// 009d3b38  e8630accff           call 0x6945a0
// 009d3b3d  68e0569e00           push 0x9e56e0
// 009d3b42  e81c4fddff           call 0x7a8a63
// 009d3b47  59                   pop ecx
// 009d3b48  c3                   ret 

extern int g_009d3b20_1;
extern int g_009d3b20_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d3b20(void*);
struct O_009d3b20 { int m(int, void*, void*, int, int); };
extern O_009d3b20 g_obj_009d3b20;
extern int g_tail_009d3b20;
void func_009d3b20()
{
    g_obj_009d3b20.m(572, (void*)&g_009d3b20_1, (void*)&g_009d3b20_2, 0, 1);
    tail_fn_009d3b20(&g_tail_009d3b20);
}