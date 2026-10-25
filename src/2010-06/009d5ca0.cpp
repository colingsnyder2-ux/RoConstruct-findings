// from server: 100% by colin
// roc 2010-06 009d5ca0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5ca0
//
// 009d5ca0  6a01                 push 1
// 009d5ca2  6a00                 push 0
// 009d5ca4  68b08fa100           push 0xa18fb0
// 009d5ca9  68bc36a400           push 0xa436bc
// 009d5cae  689c000000           push 0x9c
// 009d5cb3  b92cfdc100           mov ecx, 0xc1fd2c
// 009d5cb8  e81397ceff           call 0x6bf3d0
// 009d5cbd  68506b9e00           push 0x9e6b50
// 009d5cc2  e89c2dddff           call 0x7a8a63
// 009d5cc7  59                   pop ecx
// 009d5cc8  c3                   ret 

extern int g_009d5ca0_1;
extern int g_009d5ca0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5ca0(void*);
struct O_009d5ca0 { int m(int, void*, void*, int, int); };
extern O_009d5ca0 g_obj_009d5ca0;
extern int g_tail_009d5ca0;
void func_009d5ca0()
{
    g_obj_009d5ca0.m(156, (void*)&g_009d5ca0_1, (void*)&g_009d5ca0_2, 0, 1);
    tail_fn_009d5ca0(&g_tail_009d5ca0);
}