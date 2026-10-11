// from server: 100% by colin
// roc 2008-06 007ee950  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee950
//
// 007ee950  6a05                 push 5
// 007ee952  6831010000           push 0x131
// 007ee957  68bcce8000           push 0x80cebc
// 007ee95c  68a4ce8000           push 0x80cea4
// 007ee961  b990cb9600           mov ecx, 0x96cb90
// 007ee966  e8f5c4c1ff           call 0x40ae60
// 007ee96b  6850a27f00           push 0x7fa250
// 007ee970  e83a2eebff           call 0x6a17af
// 007ee975  59                   pop ecx
// 007ee976  c3                   ret 

extern int g_007ee950_0;
extern int g_007ee950_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ee950(void*);
struct O_007ee950 { int m(void*, void*, int, int); };
extern O_007ee950 g_obj_007ee950;
extern int g_tail_007ee950;
void func_007ee950()
{
    g_obj_007ee950.m((void*)&g_007ee950_0, (void*)&g_007ee950_1, 305, 5);
    tail_fn_007ee950(&g_tail_007ee950);
}