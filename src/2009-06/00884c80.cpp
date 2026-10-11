// from server: 100% by colin
// roc 2009-06 00884c80  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884c80
//
// 00884c80  6a07                 push 7
// 00884c82  68b0000000           push 0xb0
// 00884c87  680c608b00           push 0x8b600c
// 00884c8c  6848608b00           push 0x8b6048
// 00884c91  b9b8a4a300           mov ecx, 0xa3a4b8
// 00884c96  e8f59bbbff           call 0x43e890
// 00884c9b  6810448900           push 0x894410
// 00884ca0  e8564ee9ff           call 0x719afb
// 00884ca5  59                   pop ecx
// 00884ca6  c3                   ret 

extern int g_00884c80_0;
extern int g_00884c80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884c80(void*);
struct O_00884c80 { int m(void*, void*, int, int); };
extern O_00884c80 g_obj_00884c80;
extern int g_tail_00884c80;
void func_00884c80()
{
    g_obj_00884c80.m((void*)&g_00884c80_0, (void*)&g_00884c80_1, 176, 7);
    tail_fn_00884c80(&g_tail_00884c80);
}