// from server: 100% by colin
// roc 2009-06 00887d10  unit: seg_00880000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887d10
//
// 00887d10  68d8598c00           push 0x8c59d8
// 00887d15  68d0598c00           push 0x8c59d0
// 00887d1a  6894598c00           push 0x8c5994
// 00887d1f  68bc598c00           push 0x8c59bc
// 00887d24  6838010000           push 0x138
// 00887d29  b970eaa300           mov ecx, 0xa3ea70
// 00887d2e  e8adc0c4ff           call 0x4d3de0
// 00887d33  68705a8900           push 0x895a70
// 00887d38  e8be1de9ff           call 0x719afb
// 00887d3d  59                   pop ecx
// 00887d3e  c3                   ret 

extern int g_00887d10_1;
extern int g_00887d10_2;
extern int g_00887d10_3;
extern int g_00887d10_4;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887d10(void*);
struct O_00887d10 { int m(int, void*, void*, void*, void*); };
extern O_00887d10 g_obj_00887d10;
extern int g_tail_00887d10;
void func_00887d10()
{
    g_obj_00887d10.m(312, (void*)&g_00887d10_1, (void*)&g_00887d10_2, (void*)&g_00887d10_3, (void*)&g_00887d10_4);
    tail_fn_00887d10(&g_tail_00887d10);
}