// from server: 100% by colin
// roc 2011-06 00a2c1e0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c1e0
//
// 00a2c1e0  6a00                 push 0
// 00a2c1e2  6a02                 push 2
// 00a2c1e4  68f4000000           push 0xf4
// 00a2c1e9  688064a900           push 0xa96480
// 00a2c1ee  68f03eaa00           push 0xaa3ef0
// 00a2c1f3  b94831cd00           mov ecx, 0xcd3148
// 00a2c1f8  e803cdcdff           call 0x708f00
// 00a2c1fd  6840e2a300           push 0xa3e240
// 00a2c202  e856efddff           call 0x80b15d
// 00a2c207  59                   pop ecx
// 00a2c208  c3                   ret 

extern int g_00a2c1e0_0;
extern int g_00a2c1e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c1e0(void*);
struct O_00a2c1e0 { int m(void*, void*, int, int, int); };
extern O_00a2c1e0 g_obj_00a2c1e0;
extern int g_tail_00a2c1e0;
void func_00a2c1e0()
{
    g_obj_00a2c1e0.m((void*)&g_00a2c1e0_0, (void*)&g_00a2c1e0_1, 244, 2, 0);
    tail_fn_00a2c1e0(&g_tail_00a2c1e0);
}