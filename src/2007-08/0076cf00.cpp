// from server: 100% by colin
// roc 2007-08 0076cf00  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cf00
//
// 0076cf00  6a05                 push 5
// 0076cf02  68e8000000           push 0xe8
// 0076cf07  68d4f97800           push 0x78f9d4
// 0076cf0c  68c8f97800           push 0x78f9c8
// 0076cf11  b924ba8b00           mov ecx, 0x8bba24
// 0076cf16  e8356fcdff           call 0x443e50
// 0076cf1b  68f07a7700           push 0x777af0
// 0076cf20  e8fe3decff           call 0x630d23
// 0076cf25  59                   pop ecx
// 0076cf26  c3                   ret 

extern int g_0076cf00_0;
extern int g_0076cf00_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076cf00(void*);
struct O_0076cf00 { int m(void*, void*, int, int); };
extern O_0076cf00 g_obj_0076cf00;
extern int g_tail_0076cf00;
void func_0076cf00()
{
    g_obj_0076cf00.m((void*)&g_0076cf00_0, (void*)&g_0076cf00_1, 232, 5);
    tail_fn_0076cf00(&g_tail_0076cf00);
}