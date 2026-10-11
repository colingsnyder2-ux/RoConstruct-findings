// from server: 100% by colin
// roc 2007-08 0076f720  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f720
//
// 0076f720  6a05                 push 5
// 0076f722  68fc000000           push 0xfc
// 0076f727  6870d17900           push 0x79d170
// 0076f72c  687cd17900           push 0x79d17c
// 0076f731  b9d0e78b00           mov ecx, 0x8be7d0
// 0076f736  e86550d3ff           call 0x4a47a0
// 0076f73b  6810897700           push 0x778910
// 0076f740  e8de15ecff           call 0x630d23
// 0076f745  59                   pop ecx
// 0076f746  c3                   ret 

extern int g_0076f720_0;
extern int g_0076f720_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f720(void*);
struct O_0076f720 { int m(void*, void*, int, int); };
extern O_0076f720 g_obj_0076f720;
extern int g_tail_0076f720;
void func_0076f720()
{
    g_obj_0076f720.m((void*)&g_0076f720_0, (void*)&g_0076f720_1, 252, 5);
    tail_fn_0076f720(&g_tail_0076f720);
}