// from server: 100% by colin
// roc 2008-06 007ee980  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee980
//
// 007ee980  6a05                 push 5
// 007ee982  6830010000           push 0x130
// 007ee987  68bcce8000           push 0x80cebc
// 007ee98c  68c8ce8000           push 0x80cec8
// 007ee991  b9accb9600           mov ecx, 0x96cbac
// 007ee996  e8c5c4c1ff           call 0x40ae60
// 007ee99b  6830a27f00           push 0x7fa230
// 007ee9a0  e80a2eebff           call 0x6a17af
// 007ee9a5  59                   pop ecx
// 007ee9a6  c3                   ret 

extern int g_007ee980_0;
extern int g_007ee980_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ee980(void*);
struct O_007ee980 { int m(void*, void*, int, int); };
extern O_007ee980 g_obj_007ee980;
extern int g_tail_007ee980;
void func_007ee980()
{
    g_obj_007ee980.m((void*)&g_007ee980_0, (void*)&g_007ee980_1, 304, 5);
    tail_fn_007ee980(&g_tail_007ee980);
}