// from server: 100% by colin
// roc 2007-08 0076cf90  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cf90
//
// 0076cf90  6a05                 push 5
// 0076cf92  68ec000000           push 0xec
// 0076cf97  68d4f97800           push 0x78f9d4
// 0076cf9c  68f8f97800           push 0x78f9f8
// 0076cfa1  b978ba8b00           mov ecx, 0x8bba78
// 0076cfa6  e8856fcdff           call 0x443f30
// 0076cfab  68507b7700           push 0x777b50
// 0076cfb0  e86e3decff           call 0x630d23
// 0076cfb5  59                   pop ecx
// 0076cfb6  c3                   ret 

extern int g_0076cf90_0;
extern int g_0076cf90_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076cf90(void*);
struct O_0076cf90 { int m(void*, void*, int, int); };
extern O_0076cf90 g_obj_0076cf90;
extern int g_tail_0076cf90;
void func_0076cf90()
{
    g_obj_0076cf90.m((void*)&g_0076cf90_0, (void*)&g_0076cf90_1, 236, 5);
    tail_fn_0076cf90(&g_tail_0076cf90);
}