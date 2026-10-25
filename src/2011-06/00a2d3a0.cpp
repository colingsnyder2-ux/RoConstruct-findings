// from server: 100% by colin
// roc 2011-06 00a2d3a0  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d3a0
//
// 00a2d3a0  6a1f                 push 0x1f
// 00a2d3a2  6840ea7500           push 0x75ea40
// 00a2d3a7  68d0e87500           push 0x75e8d0
// 00a2d3ac  687821ab00           push 0xab2178
// 00a2d3b1  682c22ab00           push 0xab222c
// 00a2d3b6  b9443ecd00           mov ecx, 0xcd3e44
// 00a2d3bb  e8602dcfff           call 0x720120
// 00a2d3c0  68e0eaa300           push 0xa3eae0
// 00a2d3c5  e893ddddff           call 0x80b15d
// 00a2d3ca  59                   pop ecx
// 00a2d3cb  c3                   ret 

extern int g_00a2d3a0_0;
extern int g_00a2d3a0_1;
extern int g_00a2d3a0_2;
extern int g_00a2d3a0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d3a0(void*);
struct O_00a2d3a0 { int m(void*, void*, void*, void*, int); };
extern O_00a2d3a0 g_obj_00a2d3a0;
extern int g_tail_00a2d3a0;
void func_00a2d3a0()
{
    g_obj_00a2d3a0.m((void*)&g_00a2d3a0_0, (void*)&g_00a2d3a0_1, (void*)&g_00a2d3a0_2, (void*)&g_00a2d3a0_3, 31);
    tail_fn_00a2d3a0(&g_tail_00a2d3a0);
}