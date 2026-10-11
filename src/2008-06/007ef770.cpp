// from server: 100% by colin
// roc 2008-06 007ef770  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef770
//
// 007ef770  6a05                 push 5
// 007ef772  6854010000           push 0x154
// 007ef777  6864648100           push 0x816464
// 007ef77c  6870648100           push 0x816470
// 007ef781  b9f8d49600           mov ecx, 0x96d4f8
// 007ef786  e87584c5ff           call 0x447c00
// 007ef78b  6850ad7f00           push 0x7fad50
// 007ef790  e81a20ebff           call 0x6a17af
// 007ef795  59                   pop ecx
// 007ef796  c3                   ret 

extern int g_007ef770_0;
extern int g_007ef770_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef770(void*);
struct O_007ef770 { int m(void*, void*, int, int); };
extern O_007ef770 g_obj_007ef770;
extern int g_tail_007ef770;
void func_007ef770()
{
    g_obj_007ef770.m((void*)&g_007ef770_0, (void*)&g_007ef770_1, 340, 5);
    tail_fn_007ef770(&g_tail_007ef770);
}