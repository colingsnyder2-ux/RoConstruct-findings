// from server: 100% by colin
// roc 2011-06 00a19680  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19680
//
// 00a19680  6a00                 push 0
// 00a19682  6a1f                 push 0x1f
// 00a19684  68c0000000           push 0xc0
// 00a19689  68c0a4a700           push 0xa7a4c0
// 00a1968e  68d8a4a700           push 0xa7a4d8
// 00a19693  b94c7ccb00           mov ecx, 0xcb7c4c
// 00a19698  e8439facff           call 0x4e35e0
// 00a1969d  684036a300           push 0xa33640
// 00a196a2  e8b61adfff           call 0x80b15d
// 00a196a7  59                   pop ecx
// 00a196a8  c3                   ret 

extern int g_00a19680_0;
extern int g_00a19680_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19680(void*);
struct O_00a19680 { int m(void*, void*, int, int, int); };
extern O_00a19680 g_obj_00a19680;
extern int g_tail_00a19680;
void func_00a19680()
{
    g_obj_00a19680.m((void*)&g_00a19680_0, (void*)&g_00a19680_1, 192, 31, 0);
    tail_fn_00a19680(&g_tail_00a19680);
}