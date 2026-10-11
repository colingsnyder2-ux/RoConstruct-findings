// from server: 100% by colin
// roc 2007-08 0076f660  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f660
//
// 0076f660  6a05                 push 5
// 0076f662  6804010000           push 0x104
// 0076f667  6828d17900           push 0x79d128
// 0076f66c  681cd17900           push 0x79d11c
// 0076f671  b9cce88b00           mov ecx, 0x8be8cc
// 0076f676  e84550d3ff           call 0x4a46c0
// 0076f67b  68d0887700           push 0x7788d0
// 0076f680  e89e16ecff           call 0x630d23
// 0076f685  59                   pop ecx
// 0076f686  c3                   ret 

extern int g_0076f660_0;
extern int g_0076f660_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f660(void*);
struct O_0076f660 { int m(void*, void*, int, int); };
extern O_0076f660 g_obj_0076f660;
extern int g_tail_0076f660;
void func_0076f660()
{
    g_obj_0076f660.m((void*)&g_0076f660_0, (void*)&g_0076f660_1, 260, 5);
    tail_fn_0076f660(&g_tail_0076f660);
}