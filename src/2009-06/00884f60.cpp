// from server: 100% by colin
// roc 2009-06 00884f60  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884f60
//
// 00884f60  6a06                 push 6
// 00884f62  68d0000000           push 0xd0
// 00884f67  68cc688b00           push 0x8b68cc
// 00884f6c  68d4688b00           push 0x8b68d4
// 00884f71  b964aea300           mov ecx, 0xa3ae64
// 00884f76  e855d2bbff           call 0x4421d0
// 00884f7b  68c0468900           push 0x8946c0
// 00884f80  e8764be9ff           call 0x719afb
// 00884f85  59                   pop ecx
// 00884f86  c3                   ret 

extern int g_00884f60_0;
extern int g_00884f60_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884f60(void*);
struct O_00884f60 { int m(void*, void*, int, int); };
extern O_00884f60 g_obj_00884f60;
extern int g_tail_00884f60;
void func_00884f60()
{
    g_obj_00884f60.m((void*)&g_00884f60_0, (void*)&g_00884f60_1, 208, 6);
    tail_fn_00884f60(&g_tail_00884f60);
}