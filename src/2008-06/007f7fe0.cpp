// from server: 100% by colin
// roc 2008-06 007f7fe0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7fe0
//
// 007f7fe0  6a05                 push 5
// 007f7fe2  6868010000           push 0x168
// 007f7fe7  68ec818400           push 0x8481ec
// 007f7fec  68f4818400           push 0x8481f4
// 007f7ff1  b93cc79700           mov ecx, 0x97c73c
// 007f7ff6  e85593e3ff           call 0x631350
// 007f7ffb  68d0048000           push 0x8004d0
// 007f8000  e8aa97eaff           call 0x6a17af
// 007f8005  59                   pop ecx
// 007f8006  c3                   ret 

extern int g_007f7fe0_0;
extern int g_007f7fe0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f7fe0(void*);
struct O_007f7fe0 { int m(void*, void*, int, int); };
extern O_007f7fe0 g_obj_007f7fe0;
extern int g_tail_007f7fe0;
void func_007f7fe0()
{
    g_obj_007f7fe0.m((void*)&g_007f7fe0_0, (void*)&g_007f7fe0_1, 360, 5);
    tail_fn_007f7fe0(&g_tail_007f7fe0);
}