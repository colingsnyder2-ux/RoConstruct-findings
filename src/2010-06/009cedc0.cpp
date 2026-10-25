// from server: 100% by colin
// roc 2010-06 009cedc0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cedc0
//
// 009cedc0  6a01                 push 1
// 009cedc2  6a00                 push 0
// 009cedc4  68f4fea200           push 0xa2fef4
// 009cedc9  681804a300           push 0xa30418
// 009cedce  68d4010000           push 0x1d4
// 009cedd3  b9f899c100           mov ecx, 0xc199f8
// 009cedd8  e8d3c5c2ff           call 0x5fb3b0
// 009ceddd  68402b9e00           push 0x9e2b40
// 009cede2  e87c9cddff           call 0x7a8a63
// 009cede7  59                   pop ecx
// 009cede8  c3                   ret 

extern int g_009cedc0_1;
extern int g_009cedc0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009cedc0(void*);
struct O_009cedc0 { int m(int, void*, void*, int, int); };
extern O_009cedc0 g_obj_009cedc0;
extern int g_tail_009cedc0;
void func_009cedc0()
{
    g_obj_009cedc0.m(468, (void*)&g_009cedc0_1, (void*)&g_009cedc0_2, 0, 1);
    tail_fn_009cedc0(&g_tail_009cedc0);
}