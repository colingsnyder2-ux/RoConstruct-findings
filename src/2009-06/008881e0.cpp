// from server: 100% by colin
// roc 2009-06 008881e0  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008881e0
//
// 008881e0  689c598c00           push 0x8c599c
// 008881e5  6894598c00           push 0x8c5994
// 008881ea  68a8638c00           push 0x8c63a8
// 008881ef  686c010000           push 0x16c
// 008881f4  b970efa300           mov ecx, 0xa3ef70
// 008881f9  e862ffc4ff           call 0x4d8160
// 008881fe  68605e8900           push 0x895e60
// 00888203  e8f318e9ff           call 0x719afb
// 00888208  59                   pop ecx
// 00888209  c3                   ret 

extern int g_008881e0_1;
extern int g_008881e0_2;
extern int g_008881e0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008881e0(void*);
struct O_008881e0 { int m(int, void*, void*, void*); };
extern O_008881e0 g_obj_008881e0;
extern int g_tail_008881e0;
void func_008881e0()
{
    g_obj_008881e0.m(364, (void*)&g_008881e0_1, (void*)&g_008881e0_2, (void*)&g_008881e0_3);
    tail_fn_008881e0(&g_tail_008881e0);
}