// from server: 100% by colin
// roc 2009-06 00884bf0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884bf0
//
// 00884bf0  6a07                 push 7
// 00884bf2  688e000000           push 0x8e
// 00884bf7  680c608b00           push 0x8b600c
// 00884bfc  6824608b00           push 0x8b6024
// 00884c01  b964a4a300           mov ecx, 0xa3a464
// 00884c06  e8e59abbff           call 0x43e6f0
// 00884c0b  68b0438900           push 0x8943b0
// 00884c10  e8e64ee9ff           call 0x719afb
// 00884c15  59                   pop ecx
// 00884c16  c3                   ret 

extern int g_00884bf0_0;
extern int g_00884bf0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884bf0(void*);
struct O_00884bf0 { int m(void*, void*, int, int); };
extern O_00884bf0 g_obj_00884bf0;
extern int g_tail_00884bf0;
void func_00884bf0()
{
    g_obj_00884bf0.m((void*)&g_00884bf0_0, (void*)&g_00884bf0_1, 142, 7);
    tail_fn_00884bf0(&g_tail_00884bf0);
}