// from server: 100% by colin
// roc 2010-06 009ced90  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ced90
//
// 009ced90  6a00                 push 0
// 009ced92  6a0f                 push 0xf
// 009ced94  689c010000           push 0x19c
// 009ced99  681004a300           push 0xa30410
// 009ced9e  680804a300           push 0xa30408
// 009ceda3  b9109bc100           mov ecx, 0xc19b10
// 009ceda8  e803c1c2ff           call 0x5faeb0
// 009cedad  68602a9e00           push 0x9e2a60
// 009cedb2  e8ac9cddff           call 0x7a8a63
// 009cedb7  59                   pop ecx
// 009cedb8  c3                   ret 

extern int g_009ced90_0;
extern int g_009ced90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009ced90(void*);
struct O_009ced90 { int m(void*, void*, int, int, int); };
extern O_009ced90 g_obj_009ced90;
extern int g_tail_009ced90;
void func_009ced90()
{
    g_obj_009ced90.m((void*)&g_009ced90_0, (void*)&g_009ced90_1, 412, 15, 0);
    tail_fn_009ced90(&g_tail_009ced90);
}