// from server: 100% by colin
// roc 2011-06 00a2d520  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d520
//
// 00a2d520  6a1f                 push 0x1f
// 00a2d522  6840ea7500           push 0x75ea40
// 00a2d527  68d0e87500           push 0x75e8d0
// 00a2d52c  687821ab00           push 0xab2178
// 00a2d531  68a022ab00           push 0xab22a0
// 00a2d536  b91c3dcd00           mov ecx, 0xcd3d1c
// 00a2d53b  e8002fcfff           call 0x720440
// 00a2d540  68e0eba300           push 0xa3ebe0
// 00a2d545  e813dcddff           call 0x80b15d
// 00a2d54a  59                   pop ecx
// 00a2d54b  c3                   ret 

extern int g_00a2d520_0;
extern int g_00a2d520_1;
extern int g_00a2d520_2;
extern int g_00a2d520_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d520(void*);
struct O_00a2d520 { int m(void*, void*, void*, void*, int); };
extern O_00a2d520 g_obj_00a2d520;
extern int g_tail_00a2d520;
void func_00a2d520()
{
    g_obj_00a2d520.m((void*)&g_00a2d520_0, (void*)&g_00a2d520_1, (void*)&g_00a2d520_2, (void*)&g_00a2d520_3, 31);
    tail_fn_00a2d520(&g_tail_00a2d520);
}