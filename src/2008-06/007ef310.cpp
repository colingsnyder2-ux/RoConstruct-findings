// from server: 100% by colin
// roc 2008-06 007ef310  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef310
//
// 007ef310  6a05                 push 5
// 007ef312  6830010000           push 0x130
// 007ef317  68605b8100           push 0x815b60
// 007ef31c  68545b8100           push 0x815b54
// 007ef321  b9acd29600           mov ecx, 0x96d2ac
// 007ef326  e85553c5ff           call 0x444680
// 007ef32b  6800ab7f00           push 0x7fab00
// 007ef330  e87a24ebff           call 0x6a17af
// 007ef335  59                   pop ecx
// 007ef336  c3                   ret 

extern int g_007ef310_0;
extern int g_007ef310_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef310(void*);
struct O_007ef310 { int m(void*, void*, int, int); };
extern O_007ef310 g_obj_007ef310;
extern int g_tail_007ef310;
void func_007ef310()
{
    g_obj_007ef310.m((void*)&g_007ef310_0, (void*)&g_007ef310_1, 304, 5);
    tail_fn_007ef310(&g_tail_007ef310);
}