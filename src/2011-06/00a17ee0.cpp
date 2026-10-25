// from server: 100% by colin
// roc 2011-06 00a17ee0  unit: seg_00a10000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17ee0
//
// 00a17ee0  6a00                 push 0
// 00a17ee2  68d886a700           push 0xa786d8
// 00a17ee7  68d086a700           push 0xa786d0
// 00a17eec  68c886a700           push 0xa786c8
// 00a17ef1  6848010000           push 0x148
// 00a17ef6  b90860cb00           mov ecx, 0xcb6008
// 00a17efb  e80011aaff           call 0x4b9000
// 00a17f00  68a026a300           push 0xa326a0
// 00a17f05  e85332dfff           call 0x80b15d
// 00a17f0a  59                   pop ecx
// 00a17f0b  c3                   ret 

extern int g_00a17ee0_1;
extern int g_00a17ee0_2;
extern int g_00a17ee0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17ee0(void*);
struct O_00a17ee0 { int m(int, void*, void*, void*, int); };
extern O_00a17ee0 g_obj_00a17ee0;
extern int g_tail_00a17ee0;
void func_00a17ee0()
{
    g_obj_00a17ee0.m(328, (void*)&g_00a17ee0_1, (void*)&g_00a17ee0_2, (void*)&g_00a17ee0_3, 0);
    tail_fn_00a17ee0(&g_tail_00a17ee0);
}