// from server: 100% by colin
// roc 2009-06 00889e00  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889e00
//
// 00889e00  68c4548d00           push 0x8d54c4
// 00889e05  68104f8c00           push 0x8c4f10
// 00889e0a  68bc548d00           push 0x8d54bc
// 00889e0f  68cc000000           push 0xcc
// 00889e14  b93043a400           mov ecx, 0xa44330
// 00889e19  e8f2d7d4ff           call 0x5d7610
// 00889e1e  6870778900           push 0x897770
// 00889e23  e8d3fce8ff           call 0x719afb
// 00889e28  59                   pop ecx
// 00889e29  c3                   ret 

extern int g_00889e00_1;
extern int g_00889e00_2;
extern int g_00889e00_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00889e00(void*);
struct O_00889e00 { int m(int, void*, void*, void*); };
extern O_00889e00 g_obj_00889e00;
extern int g_tail_00889e00;
void func_00889e00()
{
    g_obj_00889e00.m(204, (void*)&g_00889e00_1, (void*)&g_00889e00_2, (void*)&g_00889e00_3);
    tail_fn_00889e00(&g_tail_00889e00);
}