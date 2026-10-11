// from server: 100% by colin
// roc 2008-06 007f8070  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8070
//
// 007f8070  6a05                 push 5
// 007f8072  6878010000           push 0x178
// 007f8077  6818828400           push 0x848218
// 007f807c  6810828400           push 0x848210
// 007f8081  b950ca9700           mov ecx, 0x97ca50
// 007f8086  e8c592e3ff           call 0x631350
// 007f808b  6830058000           push 0x800530
// 007f8090  e81a97eaff           call 0x6a17af
// 007f8095  59                   pop ecx
// 007f8096  c3                   ret 

extern int g_007f8070_0;
extern int g_007f8070_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8070(void*);
struct O_007f8070 { int m(void*, void*, int, int); };
extern O_007f8070 g_obj_007f8070;
extern int g_tail_007f8070;
void func_007f8070()
{
    g_obj_007f8070.m((void*)&g_007f8070_0, (void*)&g_007f8070_1, 376, 5);
    tail_fn_007f8070(&g_tail_007f8070);
}