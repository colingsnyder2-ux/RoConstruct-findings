// from server: 100% by colin
// roc 2008-06 007f8220  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8220
//
// 007f8220  6a05                 push 5
// 007f8222  6850010000           push 0x150
// 007f8227  68b8818400           push 0x8481b8
// 007f822c  6868828400           push 0x848268
// 007f8231  b9c8c79700           mov ecx, 0x97c7c8
// 007f8236  e88593e3ff           call 0x6315c0
// 007f823b  68f0058000           push 0x8005f0
// 007f8240  e86a95eaff           call 0x6a17af
// 007f8245  59                   pop ecx
// 007f8246  c3                   ret 

extern int g_007f8220_0;
extern int g_007f8220_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8220(void*);
struct O_007f8220 { int m(void*, void*, int, int); };
extern O_007f8220 g_obj_007f8220;
extern int g_tail_007f8220;
void func_007f8220()
{
    g_obj_007f8220.m((void*)&g_007f8220_0, (void*)&g_007f8220_1, 336, 5);
    tail_fn_007f8220(&g_tail_007f8220);
}