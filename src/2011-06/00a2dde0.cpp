// from server: 100% by colin
// roc 2011-06 00a2dde0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2dde0
//
// 00a2dde0  6a00                 push 0
// 00a2dde2  68f02ba900           push 0xa92bf0
// 00a2dde7  68883aab00           push 0xab3a88
// 00a2ddec  68fc000000           push 0xfc
// 00a2ddf1  b9f847cd00           mov ecx, 0xcd47f8
// 00a2ddf6  e8753fd0ff           call 0x731d70
// 00a2ddfb  68c0f0a300           push 0xa3f0c0
// 00a2de00  e858d3ddff           call 0x80b15d
// 00a2de05  59                   pop ecx
// 00a2de06  c3                   ret 

extern int g_00a2dde0_1;
extern int g_00a2dde0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2dde0(void*);
struct O_00a2dde0 { int m(int, void*, void*, int); };
extern O_00a2dde0 g_obj_00a2dde0;
extern int g_tail_00a2dde0;
void func_00a2dde0()
{
    g_obj_00a2dde0.m(252, (void*)&g_00a2dde0_1, (void*)&g_00a2dde0_2, 0);
    tail_fn_00a2dde0(&g_tail_00a2dde0);
}