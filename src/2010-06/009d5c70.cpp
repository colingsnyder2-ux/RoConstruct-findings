// from server: 100% by colin
// roc 2010-06 009d5c70  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5c70
//
// 009d5c70  6a01                 push 1
// 009d5c72  6a00                 push 0
// 009d5c74  68b08fa100           push 0xa18fb0
// 009d5c79  68b036a400           push 0xa436b0
// 009d5c7e  6898000000           push 0x98
// 009d5c83  b9a4fcc100           mov ecx, 0xc1fca4
// 009d5c88  e84397ceff           call 0x6bf3d0
// 009d5c8d  68a06b9e00           push 0x9e6ba0
// 009d5c92  e8cc2dddff           call 0x7a8a63
// 009d5c97  59                   pop ecx
// 009d5c98  c3                   ret 

extern int g_009d5c70_1;
extern int g_009d5c70_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5c70(void*);
struct O_009d5c70 { int m(int, void*, void*, int, int); };
extern O_009d5c70 g_obj_009d5c70;
extern int g_tail_009d5c70;
void func_009d5c70()
{
    g_obj_009d5c70.m(152, (void*)&g_009d5c70_1, (void*)&g_009d5c70_2, 0, 1);
    tail_fn_009d5c70(&g_tail_009d5c70);
}