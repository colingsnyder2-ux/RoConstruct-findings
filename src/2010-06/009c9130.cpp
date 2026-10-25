// from server: 100% by colin
// roc 2010-06 009c9130  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9130
//
// 009c9130  6a00                 push 0
// 009c9132  6a0f                 push 0xf
// 009c9134  6898000000           push 0x98
// 009c9139  685c99a200           push 0xa2995c
// 009c913e  686499a200           push 0xa29964
// 009c9143  b9ccaac000           mov ecx, 0xc0aacc
// 009c9148  e80382bcff           call 0x591350
// 009c914d  6860e89d00           push 0x9de860
// 009c9152  e80cf9ddff           call 0x7a8a63
// 009c9157  59                   pop ecx
// 009c9158  c3                   ret 

extern int g_009c9130_0;
extern int g_009c9130_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9130(void*);
struct O_009c9130 { int m(void*, void*, int, int, int); };
extern O_009c9130 g_obj_009c9130;
extern int g_tail_009c9130;
void func_009c9130()
{
    g_obj_009c9130.m((void*)&g_009c9130_0, (void*)&g_009c9130_1, 152, 15, 0);
    tail_fn_009c9130(&g_tail_009c9130);
}