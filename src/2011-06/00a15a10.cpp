// from server: 100% by colin
// roc 2011-06 00a15a10  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15a10
//
// 00a15a10  6a00                 push 0
// 00a15a12  6a1f                 push 0x1f
// 00a15a14  6894000000           push 0x94
// 00a15a19  6810d0a500           push 0xa5d010
// 00a15a1e  681cd0a500           push 0xa5d01c
// 00a15a23  b93822cb00           mov ecx, 0xcb2238
// 00a15a28  e853879fff           call 0x40e180
// 00a15a2d  68f002a300           push 0xa302f0
// 00a15a32  e82657dfff           call 0x80b15d
// 00a15a37  59                   pop ecx
// 00a15a38  c3                   ret 

extern int g_00a15a10_0;
extern int g_00a15a10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a15a10(void*);
struct O_00a15a10 { int m(void*, void*, int, int, int); };
extern O_00a15a10 g_obj_00a15a10;
extern int g_tail_00a15a10;
void func_00a15a10()
{
    g_obj_00a15a10.m((void*)&g_00a15a10_0, (void*)&g_00a15a10_1, 148, 31, 0);
    tail_fn_00a15a10(&g_tail_00a15a10);
}