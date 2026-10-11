// from server: 100% by colin
// roc 2009-06 008897d0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008897d0
//
// 008897d0  6a07                 push 7
// 008897d2  6898000000           push 0x98
// 008897d7  68884d8d00           push 0x8d4d88
// 008897dc  68ac4d8d00           push 0x8d4dac
// 008897e1  b92c38a400           mov ecx, 0xa4382c
// 008897e6  e8d51ad4ff           call 0x5cb2c0
// 008897eb  68a06f8900           push 0x896fa0
// 008897f0  e80603e9ff           call 0x719afb
// 008897f5  59                   pop ecx
// 008897f6  c3                   ret 

extern int g_008897d0_0;
extern int g_008897d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008897d0(void*);
struct O_008897d0 { int m(void*, void*, int, int); };
extern O_008897d0 g_obj_008897d0;
extern int g_tail_008897d0;
void func_008897d0()
{
    g_obj_008897d0.m((void*)&g_008897d0_0, (void*)&g_008897d0_1, 152, 7);
    tail_fn_008897d0(&g_tail_008897d0);
}