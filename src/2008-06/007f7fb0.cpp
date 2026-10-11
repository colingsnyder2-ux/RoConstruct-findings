// from server: 100% by colin
// roc 2008-06 007f7fb0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7fb0
//
// 007f7fb0  6a05                 push 5
// 007f7fb2  6874010000           push 0x174
// 007f7fb7  68ec818400           push 0x8481ec
// 007f7fbc  68e0818400           push 0x8481e0
// 007f7fc1  b9ccc89700           mov ecx, 0x97c8cc
// 007f7fc6  e88593e3ff           call 0x631350
// 007f7fcb  68b0078000           push 0x8007b0
// 007f7fd0  e8da97eaff           call 0x6a17af
// 007f7fd5  59                   pop ecx
// 007f7fd6  c3                   ret 

extern int g_007f7fb0_0;
extern int g_007f7fb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f7fb0(void*);
struct O_007f7fb0 { int m(void*, void*, int, int); };
extern O_007f7fb0 g_obj_007f7fb0;
extern int g_tail_007f7fb0;
void func_007f7fb0()
{
    g_obj_007f7fb0.m((void*)&g_007f7fb0_0, (void*)&g_007f7fb0_1, 372, 5);
    tail_fn_007f7fb0(&g_tail_007f7fb0);
}