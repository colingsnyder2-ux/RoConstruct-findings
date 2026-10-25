// from server: 100% by colin
// roc 2011-06 00a2d460  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d460
//
// 00a2d460  6a1f                 push 0x1f
// 00a2d462  6840ea7500           push 0x75ea40
// 00a2d467  68d0e87500           push 0x75e8d0
// 00a2d46c  687821ab00           push 0xab2178
// 00a2d471  686822ab00           push 0xab2268
// 00a2d476  b9283fcd00           mov ecx, 0xcd3f28
// 00a2d47b  e8302ecfff           call 0x7202b0
// 00a2d480  6860eba300           push 0xa3eb60
// 00a2d485  e8d3dcddff           call 0x80b15d
// 00a2d48a  59                   pop ecx
// 00a2d48b  c3                   ret 

extern int g_00a2d460_0;
extern int g_00a2d460_1;
extern int g_00a2d460_2;
extern int g_00a2d460_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d460(void*);
struct O_00a2d460 { int m(void*, void*, void*, void*, int); };
extern O_00a2d460 g_obj_00a2d460;
extern int g_tail_00a2d460;
void func_00a2d460()
{
    g_obj_00a2d460.m((void*)&g_00a2d460_0, (void*)&g_00a2d460_1, (void*)&g_00a2d460_2, (void*)&g_00a2d460_3, 31);
    tail_fn_00a2d460(&g_tail_00a2d460);
}