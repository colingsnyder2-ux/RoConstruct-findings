// from server: 100% by colin
// roc 2010-06 009c6380  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c6380
//
// 009c6380  6a02                 push 2
// 009c6382  6a06                 push 6
// 009c6384  68dc000000           push 0xdc
// 009c6389  685c8ea100           push 0xa18e5c
// 009c638e  68a08ea100           push 0xa18ea0
// 009c6393  b9a044c000           mov ecx, 0xc044a0
// 009c6398  e86373aeff           call 0x4ad700
// 009c639d  68c0c29d00           push 0x9dc2c0
// 009c63a2  e8bc26deff           call 0x7a8a63
// 009c63a7  59                   pop ecx
// 009c63a8  c3                   ret 

extern int g_009c6380_0;
extern int g_009c6380_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c6380(void*);
struct O_009c6380 { int m(void*, void*, int, int, int); };
extern O_009c6380 g_obj_009c6380;
extern int g_tail_009c6380;
void func_009c6380()
{
    g_obj_009c6380.m((void*)&g_009c6380_0, (void*)&g_009c6380_1, 220, 6, 2);
    tail_fn_009c6380(&g_tail_009c6380);
}