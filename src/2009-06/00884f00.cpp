// from server: 100% by colin
// roc 2009-06 00884f00  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884f00
//
// 00884f00  6a07                 push 7
// 00884f02  6808010000           push 0x108
// 00884f07  68a4688b00           push 0x8b68a4
// 00884f0c  68b0688b00           push 0x8b68b0
// 00884f11  b924aea300           mov ecx, 0xa3ae24
// 00884f16  e8e5d1bbff           call 0x442100
// 00884f1b  68c0458900           push 0x8945c0
// 00884f20  e8d64be9ff           call 0x719afb
// 00884f25  59                   pop ecx
// 00884f26  c3                   ret 

extern int g_00884f00_0;
extern int g_00884f00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884f00(void*);
struct O_00884f00 { int m(void*, void*, int, int); };
extern O_00884f00 g_obj_00884f00;
extern int g_tail_00884f00;
void func_00884f00()
{
    g_obj_00884f00.m((void*)&g_00884f00_0, (void*)&g_00884f00_1, 264, 7);
    tail_fn_00884f00(&g_tail_00884f00);
}