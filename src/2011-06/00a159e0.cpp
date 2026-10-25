// from server: 100% by colin
// roc 2011-06 00a159e0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a159e0
//
// 00a159e0  6a00                 push 0
// 00a159e2  6a1f                 push 0x1f
// 00a159e4  6895000000           push 0x95
// 00a159e9  6810d0a500           push 0xa5d010
// 00a159ee  68f8cfa500           push 0xa5cff8
// 00a159f3  b91822cb00           mov ecx, 0xcb2218
// 00a159f8  e883879fff           call 0x40e180
// 00a159fd  681003a300           push 0xa30310
// 00a15a02  e85657dfff           call 0x80b15d
// 00a15a07  59                   pop ecx
// 00a15a08  c3                   ret 

extern int g_00a159e0_0;
extern int g_00a159e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a159e0(void*);
struct O_00a159e0 { int m(void*, void*, int, int, int); };
extern O_00a159e0 g_obj_00a159e0;
extern int g_tail_00a159e0;
void func_00a159e0()
{
    g_obj_00a159e0.m((void*)&g_00a159e0_0, (void*)&g_00a159e0_1, 149, 31, 0);
    tail_fn_00a159e0(&g_tail_00a159e0);
}