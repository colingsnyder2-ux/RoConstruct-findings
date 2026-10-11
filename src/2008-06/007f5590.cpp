// from server: 100% by colin
// roc 2008-06 007f5590  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5590
//
// 007f5590  6a05                 push 5
// 007f5592  6830010000           push 0x130
// 007f5597  68e0878300           push 0x8387e0
// 007f559c  68d4878300           push 0x8387d4
// 007f55a1  b950779700           mov ecx, 0x977750
// 007f55a6  e8159edcff           call 0x5bf3c0
// 007f55ab  6820e67f00           push 0x7fe620
// 007f55b0  e8fac1eaff           call 0x6a17af
// 007f55b5  59                   pop ecx
// 007f55b6  c3                   ret 

extern int g_007f5590_0;
extern int g_007f5590_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f5590(void*);
struct O_007f5590 { int m(void*, void*, int, int); };
extern O_007f5590 g_obj_007f5590;
extern int g_tail_007f5590;
void func_007f5590()
{
    g_obj_007f5590.m((void*)&g_007f5590_0, (void*)&g_007f5590_1, 304, 5);
    tail_fn_007f5590(&g_tail_007f5590);
}