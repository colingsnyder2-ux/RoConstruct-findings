// from server: 100% by colin
// roc 2011-06 00a16070  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16070
//
// 00a16070  6a00                 push 0
// 00a16072  6a1f                 push 0x1f
// 00a16074  6890000000           push 0x90
// 00a16079  68fcc8a600           push 0xa6c8fc
// 00a1607e  68f0c8a600           push 0xa6c8f0
// 00a16083  b98829cb00           mov ecx, 0xcb2988
// 00a16088  e823aca3ff           call 0x450cb0
// 00a1608d  68e00fa300           push 0xa30fe0
// 00a16092  e8c650dfff           call 0x80b15d
// 00a16097  59                   pop ecx
// 00a16098  c3                   ret 

extern int g_00a16070_0;
extern int g_00a16070_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a16070(void*);
struct O_00a16070 { int m(void*, void*, int, int, int); };
extern O_00a16070 g_obj_00a16070;
extern int g_tail_00a16070;
void func_00a16070()
{
    g_obj_00a16070.m((void*)&g_00a16070_0, (void*)&g_00a16070_1, 144, 31, 0);
    tail_fn_00a16070(&g_tail_00a16070);
}