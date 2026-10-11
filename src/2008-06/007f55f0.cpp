// from server: 100% by colin
// roc 2008-06 007f55f0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f55f0
//
// 007f55f0  6a05                 push 5
// 007f55f2  6838010000           push 0x138
// 007f55f7  6848878100           push 0x818748
// 007f55fc  68fc878300           push 0x8387fc
// 007f5601  b918779700           mov ecx, 0x977718
// 007f5606  e8e59cdcff           call 0x5bf2f0
// 007f560b  68c0e57f00           push 0x7fe5c0
// 007f5610  e89ac1eaff           call 0x6a17af
// 007f5615  59                   pop ecx
// 007f5616  c3                   ret 

extern int g_007f55f0_0;
extern int g_007f55f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f55f0(void*);
struct O_007f55f0 { int m(void*, void*, int, int); };
extern O_007f55f0 g_obj_007f55f0;
extern int g_tail_007f55f0;
void func_007f55f0()
{
    g_obj_007f55f0.m((void*)&g_007f55f0_0, (void*)&g_007f55f0_1, 312, 5);
    tail_fn_007f55f0(&g_tail_007f55f0);
}