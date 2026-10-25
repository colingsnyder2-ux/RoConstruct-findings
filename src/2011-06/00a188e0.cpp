// from server: 100% by colin
// roc 2011-06 00a188e0  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a188e0
//
// 00a188e0  6a00                 push 0
// 00a188e2  683484a700           push 0xa78434
// 00a188e7  68c095a700           push 0xa795c0
// 00a188ec  68fc010000           push 0x1fc
// 00a188f1  b9606dcb00           mov ecx, 0xcb6d60
// 00a188f6  e8a5cbabff           call 0x4d54a0
// 00a188fb  68702fa300           push 0xa32f70
// 00a18900  e85828dfff           call 0x80b15d
// 00a18905  59                   pop ecx
// 00a18906  c3                   ret 

extern int g_00a188e0_1;
extern int g_00a188e0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a188e0(void*);
struct O_00a188e0 { int m(int, void*, void*, int); };
extern O_00a188e0 g_obj_00a188e0;
extern int g_tail_00a188e0;
void func_00a188e0()
{
    g_obj_00a188e0.m(508, (void*)&g_00a188e0_1, (void*)&g_00a188e0_2, 0);
    tail_fn_00a188e0(&g_tail_00a188e0);
}