// from server: 100% by colin
// roc 2008-06 007ef400  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef400
//
// 007ef400  6a05                 push 5
// 007ef402  6854010000           push 0x154
// 007ef407  68605b8100           push 0x815b60
// 007ef40c  689c5b8100           push 0x815b9c
// 007ef411  b938d39600           mov ecx, 0x96d338
// 007ef416  e80554c5ff           call 0x444820
// 007ef41b  6820ab7f00           push 0x7fab20
// 007ef420  e88a23ebff           call 0x6a17af
// 007ef425  59                   pop ecx
// 007ef426  c3                   ret 

extern int g_007ef400_0;
extern int g_007ef400_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef400(void*);
struct O_007ef400 { int m(void*, void*, int, int); };
extern O_007ef400 g_obj_007ef400;
extern int g_tail_007ef400;
void func_007ef400()
{
    g_obj_007ef400.m((void*)&g_007ef400_0, (void*)&g_007ef400_1, 340, 5);
    tail_fn_007ef400(&g_tail_007ef400);
}