// from server: 100% by colin
// roc 2010-06 009c7970  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7970
//
// 009c7970  6a00                 push 0
// 009c7972  6a0f                 push 0xf
// 009c7974  6899000000           push 0x99
// 009c7979  6838a4a100           push 0xa1a438
// 009c797e  6828a4a100           push 0xa1a428
// 009c7983  b9e460c000           mov ecx, 0xc060e4
// 009c7988  e833f7b0ff           call 0x4d70c0
// 009c798d  6840d39d00           push 0x9dd340
// 009c7992  e8cc10deff           call 0x7a8a63
// 009c7997  59                   pop ecx
// 009c7998  c3                   ret 

extern int g_009c7970_0;
extern int g_009c7970_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c7970(void*);
struct O_009c7970 { int m(void*, void*, int, int, int); };
extern O_009c7970 g_obj_009c7970;
extern int g_tail_009c7970;
void func_009c7970()
{
    g_obj_009c7970.m((void*)&g_009c7970_0, (void*)&g_009c7970_1, 153, 15, 0);
    tail_fn_009c7970(&g_tail_009c7970);
}