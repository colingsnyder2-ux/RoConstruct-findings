// from server: 100% by colin
// roc 2011-06 00a2b790  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b790
//
// 00a2b790  6a00                 push 0
// 00a2b792  6a1f                 push 0x1f
// 00a2b794  6880010000           push 0x180
// 00a2b799  68b4d2aa00           push 0xaad2b4
// 00a2b79e  68d0d2aa00           push 0xaad2d0
// 00a2b7a3  b9002dcd00           mov ecx, 0xcd2d00
// 00a2b7a8  e8e36fcdff           call 0x702790
// 00a2b7ad  68e0dba300           push 0xa3dbe0
// 00a2b7b2  e8a6f9ddff           call 0x80b15d
// 00a2b7b7  59                   pop ecx
// 00a2b7b8  c3                   ret 

extern int g_00a2b790_0;
extern int g_00a2b790_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b790(void*);
struct O_00a2b790 { int m(void*, void*, int, int, int); };
extern O_00a2b790 g_obj_00a2b790;
extern int g_tail_00a2b790;
void func_00a2b790()
{
    g_obj_00a2b790.m((void*)&g_00a2b790_0, (void*)&g_00a2b790_1, 384, 31, 0);
    tail_fn_00a2b790(&g_tail_00a2b790);
}