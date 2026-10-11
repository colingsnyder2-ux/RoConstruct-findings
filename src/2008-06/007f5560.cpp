// from server: 100% by colin
// roc 2008-06 007f5560  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5560
//
// 007f5560  6a05                 push 5
// 007f5562  683a010000           push 0x13a
// 007f5567  68847b8200           push 0x827b84
// 007f556c  68c4878300           push 0x8387c4
// 007f5571  b9e0769700           mov ecx, 0x9776e0
// 007f5576  e8759ddcff           call 0x5bf2f0
// 007f557b  6840e67f00           push 0x7fe640
// 007f5580  e82ac2eaff           call 0x6a17af
// 007f5585  59                   pop ecx
// 007f5586  c3                   ret 

extern int g_007f5560_0;
extern int g_007f5560_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f5560(void*);
struct O_007f5560 { int m(void*, void*, int, int); };
extern O_007f5560 g_obj_007f5560;
extern int g_tail_007f5560;
void func_007f5560()
{
    g_obj_007f5560.m((void*)&g_007f5560_0, (void*)&g_007f5560_1, 314, 5);
    tail_fn_007f5560(&g_tail_007f5560);
}