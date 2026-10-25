// from server: 100% by colin
// roc 2011-06 00a22a60  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a22a60
//
// 00a22a60  6a03                 push 3
// 00a22a62  6a15                 push 0x15
// 00a22a64  681c010000           push 0x11c
// 00a22a69  6858d4a600           push 0xa6d458
// 00a22a6e  686055a900           push 0xa95560
// 00a22a73  b948bccc00           mov ecx, 0xccbc48
// 00a22a78  e813c2bfff           call 0x61ec90
// 00a22a7d  68909ba300           push 0xa39b90
// 00a22a82  e8d686deff           call 0x80b15d
// 00a22a87  59                   pop ecx
// 00a22a88  c3                   ret 

extern int g_00a22a60_0;
extern int g_00a22a60_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a22a60(void*);
struct O_00a22a60 { int m(void*, void*, int, int, int); };
extern O_00a22a60 g_obj_00a22a60;
extern int g_tail_00a22a60;
void func_00a22a60()
{
    g_obj_00a22a60.m((void*)&g_00a22a60_0, (void*)&g_00a22a60_1, 284, 21, 3);
    tail_fn_00a22a60(&g_tail_00a22a60);
}