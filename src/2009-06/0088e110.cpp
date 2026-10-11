// from server: 100% by colin
// roc 2009-06 0088e110  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e110
//
// 0088e110  68f4f88d00           push 0x8df8f4
// 0088e115  68c8d88b00           push 0x8bd8c8
// 0088e11a  68f0f88d00           push 0x8df8f0
// 0088e11f  68c0000000           push 0xc0
// 0088e124  b904c5a400           mov ecx, 0xa4c504
// 0088e129  e8d210dcff           call 0x64f200
// 0088e12e  68f0a68900           push 0x89a6f0
// 0088e133  e8c3b9e8ff           call 0x719afb
// 0088e138  59                   pop ecx
// 0088e139  c3                   ret 

extern int g_0088e110_1;
extern int g_0088e110_2;
extern int g_0088e110_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088e110(void*);
struct O_0088e110 { int m(int, void*, void*, void*); };
extern O_0088e110 g_obj_0088e110;
extern int g_tail_0088e110;
void func_0088e110()
{
    g_obj_0088e110.m(192, (void*)&g_0088e110_1, (void*)&g_0088e110_2, (void*)&g_0088e110_3);
    tail_fn_0088e110(&g_tail_0088e110);
}