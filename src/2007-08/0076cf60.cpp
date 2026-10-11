// from server: 100% by colin
// roc 2007-08 0076cf60  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cf60
//
// 0076cf60  6a05                 push 5
// 0076cf62  68ea000000           push 0xea
// 0076cf67  68d4f97800           push 0x78f9d4
// 0076cf6c  68ecf97800           push 0x78f9ec
// 0076cf71  b95cba8b00           mov ecx, 0x8bba5c
// 0076cf76  e8d56ecdff           call 0x443e50
// 0076cf7b  68707a7700           push 0x777a70
// 0076cf80  e89e3decff           call 0x630d23
// 0076cf85  59                   pop ecx
// 0076cf86  c3                   ret 

extern int g_0076cf60_0;
extern int g_0076cf60_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076cf60(void*);
struct O_0076cf60 { int m(void*, void*, int, int); };
extern O_0076cf60 g_obj_0076cf60;
extern int g_tail_0076cf60;
void func_0076cf60()
{
    g_obj_0076cf60.m((void*)&g_0076cf60_0, (void*)&g_0076cf60_1, 234, 5);
    tail_fn_0076cf60(&g_tail_0076cf60);
}