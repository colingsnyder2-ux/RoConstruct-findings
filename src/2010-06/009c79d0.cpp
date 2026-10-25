// from server: 100% by colin
// roc 2010-06 009c79d0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c79d0
//
// 009c79d0  6a00                 push 0
// 009c79d2  6a0f                 push 0xf
// 009c79d4  6898000000           push 0x98
// 009c79d9  6838a4a100           push 0xa1a438
// 009c79de  6854a4a100           push 0xa1a454
// 009c79e3  b92461c000           mov ecx, 0xc06124
// 009c79e8  e8d3f6b0ff           call 0x4d70c0
// 009c79ed  68a0d19d00           push 0x9dd1a0
// 009c79f2  e86c10deff           call 0x7a8a63
// 009c79f7  59                   pop ecx
// 009c79f8  c3                   ret 

extern int g_009c79d0_0;
extern int g_009c79d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c79d0(void*);
struct O_009c79d0 { int m(void*, void*, int, int, int); };
extern O_009c79d0 g_obj_009c79d0;
extern int g_tail_009c79d0;
void func_009c79d0()
{
    g_obj_009c79d0.m((void*)&g_009c79d0_0, (void*)&g_009c79d0_1, 152, 15, 0);
    tail_fn_009c79d0(&g_tail_009c79d0);
}