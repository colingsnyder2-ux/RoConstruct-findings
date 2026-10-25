// from server: 100% by colin
// roc 2011-06 00a15aa0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15aa0
//
// 00a15aa0  6a00                 push 0
// 00a15aa2  6a1f                 push 0x1f
// 00a15aa4  68b8000000           push 0xb8
// 00a15aa9  6840d0a500           push 0xa5d040
// 00a15aae  685cd0a500           push 0xa5d05c
// 00a15ab3  b99822cb00           mov ecx, 0xcb2298
// 00a15ab8  e863889fff           call 0x40e320
// 00a15abd  683003a300           push 0xa30330
// 00a15ac2  e89656dfff           call 0x80b15d
// 00a15ac7  59                   pop ecx
// 00a15ac8  c3                   ret 

extern int g_00a15aa0_0;
extern int g_00a15aa0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a15aa0(void*);
struct O_00a15aa0 { int m(void*, void*, int, int, int); };
extern O_00a15aa0 g_obj_00a15aa0;
extern int g_tail_00a15aa0;
void func_00a15aa0()
{
    g_obj_00a15aa0.m((void*)&g_00a15aa0_0, (void*)&g_00a15aa0_1, 184, 31, 0);
    tail_fn_00a15aa0(&g_tail_00a15aa0);
}