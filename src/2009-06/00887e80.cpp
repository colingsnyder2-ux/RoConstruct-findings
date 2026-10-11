// from server: 100% by colin
// roc 2009-06 00887e80  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887e80
//
// 00887e80  6a07                 push 7
// 00887e82  68c0000000           push 0xc0
// 00887e87  68305d8c00           push 0x8c5d30
// 00887e8c  68345e8c00           push 0x8c5e34
// 00887e91  b914eca300           mov ecx, 0xa3ec14
// 00887e96  e8a5d5c4ff           call 0x4d5440
// 00887e9b  68b05c8900           push 0x895cb0
// 00887ea0  e8561ce9ff           call 0x719afb
// 00887ea5  59                   pop ecx
// 00887ea6  c3                   ret 

extern int g_00887e80_0;
extern int g_00887e80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887e80(void*);
struct O_00887e80 { int m(void*, void*, int, int); };
extern O_00887e80 g_obj_00887e80;
extern int g_tail_00887e80;
void func_00887e80()
{
    g_obj_00887e80.m((void*)&g_00887e80_0, (void*)&g_00887e80_1, 192, 7);
    tail_fn_00887e80(&g_tail_00887e80);
}