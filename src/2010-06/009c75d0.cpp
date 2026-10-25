// from server: 100% by colin
// roc 2010-06 009c75d0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c75d0
//
// 009c75d0  6a00                 push 0
// 009c75d2  6a0f                 push 0xf
// 009c75d4  6824010000           push 0x124
// 009c75d9  680c9da100           push 0xa19d0c
// 009c75de  68049da100           push 0xa19d04
// 009c75e3  b9945ec000           mov ecx, 0xc05e94
// 009c75e8  e833c7b0ff           call 0x4d3d20
// 009c75ed  6830d09d00           push 0x9dd030
// 009c75f2  e86c14deff           call 0x7a8a63
// 009c75f7  59                   pop ecx
// 009c75f8  c3                   ret 

extern int g_009c75d0_0;
extern int g_009c75d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c75d0(void*);
struct O_009c75d0 { int m(void*, void*, int, int, int); };
extern O_009c75d0 g_obj_009c75d0;
extern int g_tail_009c75d0;
void func_009c75d0()
{
    g_obj_009c75d0.m((void*)&g_009c75d0_0, (void*)&g_009c75d0_1, 292, 15, 0);
    tail_fn_009c75d0(&g_tail_009c75d0);
}