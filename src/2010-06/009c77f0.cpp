// from server: 100% by colin
// roc 2010-06 009c77f0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c77f0
//
// 009c77f0  6a00                 push 0
// 009c77f2  6a0f                 push 0xf
// 009c77f4  68d8000000           push 0xd8
// 009c77f9  6830a2a100           push 0xa1a230
// 009c77fe  6894a3a100           push 0xa1a394
// 009c7803  b94460c000           mov ecx, 0xc06044
// 009c7808  e8b3f5b0ff           call 0x4d6dc0
// 009c780d  6840d19d00           push 0x9dd140
// 009c7812  e84c12deff           call 0x7a8a63
// 009c7817  59                   pop ecx
// 009c7818  c3                   ret 

extern int g_009c77f0_0;
extern int g_009c77f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c77f0(void*);
struct O_009c77f0 { int m(void*, void*, int, int, int); };
extern O_009c77f0 g_obj_009c77f0;
extern int g_tail_009c77f0;
void func_009c77f0()
{
    g_obj_009c77f0.m((void*)&g_009c77f0_0, (void*)&g_009c77f0_1, 216, 15, 0);
    tail_fn_009c77f0(&g_tail_009c77f0);
}