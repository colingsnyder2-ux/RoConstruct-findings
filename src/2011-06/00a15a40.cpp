// from server: 100% by colin
// roc 2011-06 00a15a40  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15a40
//
// 00a15a40  6a00                 push 0
// 00a15a42  6a1f                 push 0x1f
// 00a15a44  6898000000           push 0x98
// 00a15a49  6840d0a500           push 0xa5d040
// 00a15a4e  6834d0a500           push 0xa5d034
// 00a15a53  b95822cb00           mov ecx, 0xcb2258
// 00a15a58  e8f3879fff           call 0x40e250
// 00a15a5d  687003a300           push 0xa30370
// 00a15a62  e8f656dfff           call 0x80b15d
// 00a15a67  59                   pop ecx
// 00a15a68  c3                   ret 

extern int g_00a15a40_0;
extern int g_00a15a40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a15a40(void*);
struct O_00a15a40 { int m(void*, void*, int, int, int); };
extern O_00a15a40 g_obj_00a15a40;
extern int g_tail_00a15a40;
void func_00a15a40()
{
    g_obj_00a15a40.m((void*)&g_00a15a40_0, (void*)&g_00a15a40_1, 152, 31, 0);
    tail_fn_00a15a40(&g_tail_00a15a40);
}