// from server: 100% by colin
// roc 2009-06 00887150  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887150
//
// 00887150  68cc4e8c00           push 0x8c4ecc
// 00887155  68c44e8c00           push 0x8c4ec4
// 0088715a  68bc4e8c00           push 0x8c4ebc
// 0088715f  68d0000000           push 0xd0
// 00887164  b914daa300           mov ecx, 0xa3da14
// 00887169  e81293c3ff           call 0x4c0480
// 0088716e  6840558900           push 0x895540
// 00887173  e88329e9ff           call 0x719afb
// 00887178  59                   pop ecx
// 00887179  c3                   ret 

extern int g_00887150_1;
extern int g_00887150_2;
extern int g_00887150_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887150(void*);
struct O_00887150 { int m(int, void*, void*, void*); };
extern O_00887150 g_obj_00887150;
extern int g_tail_00887150;
void func_00887150()
{
    g_obj_00887150.m(208, (void*)&g_00887150_1, (void*)&g_00887150_2, (void*)&g_00887150_3);
    tail_fn_00887150(&g_tail_00887150);
}