// from server: 100% by colin
// roc 2011-06 00a15a70  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15a70
//
// 00a15a70  6a00                 push 0
// 00a15a72  6a1f                 push 0x1f
// 00a15a74  68b4000000           push 0xb4
// 00a15a79  6840d0a500           push 0xa5d040
// 00a15a7e  684cd0a500           push 0xa5d04c
// 00a15a83  b97822cb00           mov ecx, 0xcb2278
// 00a15a88  e893889fff           call 0x40e320
// 00a15a8d  685003a300           push 0xa30350
// 00a15a92  e8c656dfff           call 0x80b15d
// 00a15a97  59                   pop ecx
// 00a15a98  c3                   ret 

extern int g_00a15a70_0;
extern int g_00a15a70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a15a70(void*);
struct O_00a15a70 { int m(void*, void*, int, int, int); };
extern O_00a15a70 g_obj_00a15a70;
extern int g_tail_00a15a70;
void func_00a15a70()
{
    g_obj_00a15a70.m((void*)&g_00a15a70_0, (void*)&g_00a15a70_1, 180, 31, 0);
    tail_fn_00a15a70(&g_tail_00a15a70);
}