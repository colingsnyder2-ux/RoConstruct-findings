// from server: 100% by colin
// roc 2009-06 00884300  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884300
//
// 00884300  6a07                 push 7
// 00884302  688d000000           push 0x8d
// 00884307  68f8db8a00           push 0x8adbf8
// 0088430c  68e0db8a00           push 0x8adbe0
// 00884311  b92ca0a300           mov ecx, 0xa3a02c
// 00884316  e8b562b8ff           call 0x40a5d0
// 0088431b  68803b8900           push 0x893b80
// 00884320  e8d657e9ff           call 0x719afb
// 00884325  59                   pop ecx
// 00884326  c3                   ret 

extern int g_00884300_0;
extern int g_00884300_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884300(void*);
struct O_00884300 { int m(void*, void*, int, int); };
extern O_00884300 g_obj_00884300;
extern int g_tail_00884300;
void func_00884300()
{
    g_obj_00884300.m((void*)&g_00884300_0, (void*)&g_00884300_1, 141, 7);
    tail_fn_00884300(&g_tail_00884300);
}