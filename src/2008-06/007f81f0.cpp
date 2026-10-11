// from server: 100% by colin
// roc 2008-06 007f81f0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f81f0
//
// 007f81f0  6a05                 push 5
// 007f81f2  684c010000           push 0x14c
// 007f81f7  68b8818400           push 0x8481b8
// 007f81fc  6890ad8000           push 0x80ad90
// 007f8201  b900c89700           mov ecx, 0x97c800
// 007f8206  e8e592e3ff           call 0x6314f0
// 007f820b  68b0058000           push 0x8005b0
// 007f8210  e89a95eaff           call 0x6a17af
// 007f8215  59                   pop ecx
// 007f8216  c3                   ret 

extern int g_007f81f0_0;
extern int g_007f81f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f81f0(void*);
struct O_007f81f0 { int m(void*, void*, int, int); };
extern O_007f81f0 g_obj_007f81f0;
extern int g_tail_007f81f0;
void func_007f81f0()
{
    g_obj_007f81f0.m((void*)&g_007f81f0_0, (void*)&g_007f81f0_1, 332, 5);
    tail_fn_007f81f0(&g_tail_007f81f0);
}