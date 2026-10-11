// from server: 100% by colin
// roc 2008-06 007ef3d0  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef3d0
//
// 007ef3d0  6a05                 push 5
// 007ef3d2  6850010000           push 0x150
// 007ef3d7  68605b8100           push 0x815b60
// 007ef3dc  688c5b8100           push 0x815b8c
// 007ef3e1  b91cd39600           mov ecx, 0x96d31c
// 007ef3e6  e83554c5ff           call 0x444820
// 007ef3eb  6840ab7f00           push 0x7fab40
// 007ef3f0  e8ba23ebff           call 0x6a17af
// 007ef3f5  59                   pop ecx
// 007ef3f6  c3                   ret 

extern int g_007ef3d0_0;
extern int g_007ef3d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef3d0(void*);
struct O_007ef3d0 { int m(void*, void*, int, int); };
extern O_007ef3d0 g_obj_007ef3d0;
extern int g_tail_007ef3d0;
void func_007ef3d0()
{
    g_obj_007ef3d0.m((void*)&g_007ef3d0_0, (void*)&g_007ef3d0_1, 336, 5);
    tail_fn_007ef3d0(&g_tail_007ef3d0);
}