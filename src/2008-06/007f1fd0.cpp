// from server: 100% by colin
// roc 2008-06 007f1fd0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1fd0
//
// 007f1fd0  6a05                 push 5
// 007f1fd2  685c010000           push 0x15c
// 007f1fd7  6810448200           push 0x824410
// 007f1fdc  682c448200           push 0x82442c
// 007f1fe1  b91c139700           mov ecx, 0x97131c
// 007f1fe6  e81585cbff           call 0x4aa500
// 007f1feb  6810be7f00           push 0x7fbe10
// 007f1ff0  e8baf7eaff           call 0x6a17af
// 007f1ff5  59                   pop ecx
// 007f1ff6  c3                   ret 

extern int g_007f1fd0_0;
extern int g_007f1fd0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1fd0(void*);
struct O_007f1fd0 { int m(void*, void*, int, int); };
extern O_007f1fd0 g_obj_007f1fd0;
extern int g_tail_007f1fd0;
void func_007f1fd0()
{
    g_obj_007f1fd0.m((void*)&g_007f1fd0_0, (void*)&g_007f1fd0_1, 348, 5);
    tail_fn_007f1fd0(&g_tail_007f1fd0);
}