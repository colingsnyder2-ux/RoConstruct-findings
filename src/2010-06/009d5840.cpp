// from server: 100% by colin
// roc 2010-06 009d5840  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5840
//
// 009d5840  6a00                 push 0
// 009d5842  6a0f                 push 0xf
// 009d5844  685c010000           push 0x15c
// 009d5849  68f429a400           push 0xa429f4
// 009d584e  68a42aa400           push 0xa42aa4
// 009d5853  b9e0f5c100           mov ecx, 0xc1f5e0
// 009d5858  e8f327ceff           call 0x6b8050
// 009d585d  6870669e00           push 0x9e6670
// 009d5862  e8fc31ddff           call 0x7a8a63
// 009d5867  59                   pop ecx
// 009d5868  c3                   ret 

extern int g_009d5840_0;
extern int g_009d5840_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5840(void*);
struct O_009d5840 { int m(void*, void*, int, int, int); };
extern O_009d5840 g_obj_009d5840;
extern int g_tail_009d5840;
void func_009d5840()
{
    g_obj_009d5840.m((void*)&g_009d5840_0, (void*)&g_009d5840_1, 348, 15, 0);
    tail_fn_009d5840(&g_tail_009d5840);
}