// from server: 100% by colin
// roc 2008-06 007f8010  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8010
//
// 007f8010  6a05                 push 5
// 007f8012  686c010000           push 0x16c
// 007f8017  68ec818400           push 0x8481ec
// 007f801c  6800828400           push 0x848200
// 007f8021  b944c99700           mov ecx, 0x97c944
// 007f8026  e82593e3ff           call 0x631350
// 007f802b  68f0048000           push 0x8004f0
// 007f8030  e87a97eaff           call 0x6a17af
// 007f8035  59                   pop ecx
// 007f8036  c3                   ret 

extern int g_007f8010_0;
extern int g_007f8010_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8010(void*);
struct O_007f8010 { int m(void*, void*, int, int); };
extern O_007f8010 g_obj_007f8010;
extern int g_tail_007f8010;
void func_007f8010()
{
    g_obj_007f8010.m((void*)&g_007f8010_0, (void*)&g_007f8010_1, 364, 5);
    tail_fn_007f8010(&g_tail_007f8010);
}