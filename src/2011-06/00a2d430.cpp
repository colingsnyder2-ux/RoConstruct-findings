// from server: 100% by colin
// roc 2011-06 00a2d430  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d430
//
// 00a2d430  6a1f                 push 0x1f
// 00a2d432  68f0e97500           push 0x75e9f0
// 00a2d437  68b0e87500           push 0x75e8b0
// 00a2d43c  682074a700           push 0xa77420
// 00a2d441  685822ab00           push 0xab2258
// 00a2d446  b9503ccd00           mov ecx, 0xcd3c50
// 00a2d44b  e8b02dcfff           call 0x720200
// 00a2d450  6880eba300           push 0xa3eb80
// 00a2d455  e803ddddff           call 0x80b15d
// 00a2d45a  59                   pop ecx
// 00a2d45b  c3                   ret 

extern int g_00a2d430_0;
extern int g_00a2d430_1;
extern int g_00a2d430_2;
extern int g_00a2d430_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d430(void*);
struct O_00a2d430 { int m(void*, void*, void*, void*, int); };
extern O_00a2d430 g_obj_00a2d430;
extern int g_tail_00a2d430;
void func_00a2d430()
{
    g_obj_00a2d430.m((void*)&g_00a2d430_0, (void*)&g_00a2d430_1, (void*)&g_00a2d430_2, (void*)&g_00a2d430_3, 31);
    tail_fn_00a2d430(&g_tail_00a2d430);
}