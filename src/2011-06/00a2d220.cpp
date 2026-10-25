// from server: 100% by colin
// roc 2011-06 00a2d220  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d220
//
// 00a2d220  6a1f                 push 0x1f
// 00a2d222  6840ea7500           push 0x75ea40
// 00a2d227  68d0e87500           push 0x75e8d0
// 00a2d22c  687821ab00           push 0xab2178
// 00a2d231  68b021ab00           push 0xab21b0
// 00a2d236  b9bc3dcd00           mov ecx, 0xcd3dbc
// 00a2d23b  e8f02bcfff           call 0x71fe30
// 00a2d240  68e0e9a300           push 0xa3e9e0
// 00a2d245  e813dfddff           call 0x80b15d
// 00a2d24a  59                   pop ecx
// 00a2d24b  c3                   ret 

extern int g_00a2d220_0;
extern int g_00a2d220_1;
extern int g_00a2d220_2;
extern int g_00a2d220_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d220(void*);
struct O_00a2d220 { int m(void*, void*, void*, void*, int); };
extern O_00a2d220 g_obj_00a2d220;
extern int g_tail_00a2d220;
void func_00a2d220()
{
    g_obj_00a2d220.m((void*)&g_00a2d220_0, (void*)&g_00a2d220_1, (void*)&g_00a2d220_2, (void*)&g_00a2d220_3, 31);
    tail_fn_00a2d220(&g_tail_00a2d220);
}