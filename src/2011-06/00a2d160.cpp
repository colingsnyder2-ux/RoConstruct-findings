// from server: 100% by colin
// roc 2011-06 00a2d160  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d160
//
// 00a2d160  6a1f                 push 0x1f
// 00a2d162  6840ea7500           push 0x75ea40
// 00a2d167  68d0e87500           push 0x75e8d0
// 00a2d16c  687821ab00           push 0xab2178
// 00a2d171  686821ab00           push 0xab2168
// 00a2d176  b9d43bcd00           mov ecx, 0xcd3bd4
// 00a2d17b  e8702acfff           call 0x71fbf0
// 00a2d180  6860e9a300           push 0xa3e960
// 00a2d185  e8d3dfddff           call 0x80b15d
// 00a2d18a  59                   pop ecx
// 00a2d18b  c3                   ret 

extern int g_00a2d160_0;
extern int g_00a2d160_1;
extern int g_00a2d160_2;
extern int g_00a2d160_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d160(void*);
struct O_00a2d160 { int m(void*, void*, void*, void*, int); };
extern O_00a2d160 g_obj_00a2d160;
extern int g_tail_00a2d160;
void func_00a2d160()
{
    g_obj_00a2d160.m((void*)&g_00a2d160_0, (void*)&g_00a2d160_1, (void*)&g_00a2d160_2, (void*)&g_00a2d160_3, 31);
    tail_fn_00a2d160(&g_tail_00a2d160);
}