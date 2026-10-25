// from server: 100% by colin
// roc 2011-06 00a2d130  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d130
//
// 00a2d130  6a1f                 push 0x1f
// 00a2d132  68f0e97500           push 0x75e9f0
// 00a2d137  68b0e87500           push 0x75e8b0
// 00a2d13c  682074a700           push 0xa77420
// 00a2d141  685c21ab00           push 0xab215c
// 00a2d146  b9003ecd00           mov ecx, 0xcd3e00
// 00a2d14b  e81029cfff           call 0x71fa60
// 00a2d150  6880e9a300           push 0xa3e980
// 00a2d155  e803e0ddff           call 0x80b15d
// 00a2d15a  59                   pop ecx
// 00a2d15b  c3                   ret 

extern int g_00a2d130_0;
extern int g_00a2d130_1;
extern int g_00a2d130_2;
extern int g_00a2d130_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d130(void*);
struct O_00a2d130 { int m(void*, void*, void*, void*, int); };
extern O_00a2d130 g_obj_00a2d130;
extern int g_tail_00a2d130;
void func_00a2d130()
{
    g_obj_00a2d130.m((void*)&g_00a2d130_0, (void*)&g_00a2d130_1, (void*)&g_00a2d130_2, (void*)&g_00a2d130_3, 31);
    tail_fn_00a2d130(&g_tail_00a2d130);
}