// from server: 100% by colin
// roc 2009-06 008897a0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008897a0
//
// 008897a0  6a07                 push 7
// 008897a2  688c000000           push 0x8c
// 008897a7  68884d8d00           push 0x8d4d88
// 008897ac  68904d8d00           push 0x8d4d90
// 008897b1  b97036a400           mov ecx, 0xa43670
// 008897b6  e8051bd4ff           call 0x5cb2c0
// 008897bb  6880718900           push 0x897180
// 008897c0  e83603e9ff           call 0x719afb
// 008897c5  59                   pop ecx
// 008897c6  c3                   ret 

extern int g_008897a0_0;
extern int g_008897a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008897a0(void*);
struct O_008897a0 { int m(void*, void*, int, int); };
extern O_008897a0 g_obj_008897a0;
extern int g_tail_008897a0;
void func_008897a0()
{
    g_obj_008897a0.m((void*)&g_008897a0_0, (void*)&g_008897a0_1, 140, 7);
    tail_fn_008897a0(&g_tail_008897a0);
}