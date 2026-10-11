// from server: 100% by colin
// roc 2008-06 007f84c0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f84c0
//
// 007f84c0  6a05                 push 5
// 007f84c2  684c010000           push 0x14c
// 007f84c7  68b8818400           push 0x8481b8
// 007f84cc  6868828400           push 0x848268
// 007f84d1  b9ccc69700           mov ecx, 0x97c6cc
// 007f84d6  e82596e3ff           call 0x631b00
// 007f84db  6810078000           push 0x800710
// 007f84e0  e8ca92eaff           call 0x6a17af
// 007f84e5  59                   pop ecx
// 007f84e6  c3                   ret 

extern int g_007f84c0_0;
extern int g_007f84c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f84c0(void*);
struct O_007f84c0 { int m(void*, void*, int, int); };
extern O_007f84c0 g_obj_007f84c0;
extern int g_tail_007f84c0;
void func_007f84c0()
{
    g_obj_007f84c0.m((void*)&g_007f84c0_0, (void*)&g_007f84c0_1, 332, 5);
    tail_fn_007f84c0(&g_tail_007f84c0);
}