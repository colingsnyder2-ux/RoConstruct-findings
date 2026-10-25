// from server: 100% by colin
// roc 2010-06 009c6460  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c6460
//
// 009c6460  6a00                 push 0
// 009c6462  6a06                 push 6
// 009c6464  6838010000           push 0x138
// 009c6469  685c8ea100           push 0xa18e5c
// 009c646e  68e08ea100           push 0xa18ee0
// 009c6473  b9c044c000           mov ecx, 0xc044c0
// 009c6478  e88375aeff           call 0x4ada00
// 009c647d  6800c29d00           push 0x9dc200
// 009c6482  e8dc25deff           call 0x7a8a63
// 009c6487  59                   pop ecx
// 009c6488  c3                   ret 

extern int g_009c6460_0;
extern int g_009c6460_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c6460(void*);
struct O_009c6460 { int m(void*, void*, int, int, int); };
extern O_009c6460 g_obj_009c6460;
extern int g_tail_009c6460;
void func_009c6460()
{
    g_obj_009c6460.m((void*)&g_009c6460_0, (void*)&g_009c6460_1, 312, 6, 0);
    tail_fn_009c6460(&g_tail_009c6460);
}