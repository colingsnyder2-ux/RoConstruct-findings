// from server: 100% by colin
// roc 2011-06 00a2b700  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b700
//
// 00a2b700  6a00                 push 0
// 00a2b702  6a1f                 push 0x1f
// 00a2b704  6884010000           push 0x184
// 00a2b709  68b4d2aa00           push 0xaad2b4
// 00a2b70e  68a8d2aa00           push 0xaad2a8
// 00a2b713  b9b02ccd00           mov ecx, 0xcd2cb0
// 00a2b718  e87370cdff           call 0x702790
// 00a2b71d  6880dea300           push 0xa3de80
// 00a2b722  e836faddff           call 0x80b15d
// 00a2b727  59                   pop ecx
// 00a2b728  c3                   ret 

extern int g_00a2b700_0;
extern int g_00a2b700_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b700(void*);
struct O_00a2b700 { int m(void*, void*, int, int, int); };
extern O_00a2b700 g_obj_00a2b700;
extern int g_tail_00a2b700;
void func_00a2b700()
{
    g_obj_00a2b700.m((void*)&g_00a2b700_0, (void*)&g_00a2b700_1, 388, 31, 0);
    tail_fn_00a2b700(&g_tail_00a2b700);
}