// from server: 100% by colin
// roc 2011-06 00a2b850  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b850
//
// 00a2b850  6a00                 push 0
// 00a2b852  6a1f                 push 0x1f
// 00a2b854  689c010000           push 0x19c
// 00a2b859  6880d2aa00           push 0xaad280
// 00a2b85e  68fcd2aa00           push 0xaad2fc
// 00a2b863  b9582acd00           mov ecx, 0xcd2a58
// 00a2b868  e8236fcdff           call 0x702790
// 00a2b86d  6840dca300           push 0xa3dc40
// 00a2b872  e8e6f8ddff           call 0x80b15d
// 00a2b877  59                   pop ecx
// 00a2b878  c3                   ret 

extern int g_00a2b850_0;
extern int g_00a2b850_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b850(void*);
struct O_00a2b850 { int m(void*, void*, int, int, int); };
extern O_00a2b850 g_obj_00a2b850;
extern int g_tail_00a2b850;
void func_00a2b850()
{
    g_obj_00a2b850.m((void*)&g_00a2b850_0, (void*)&g_00a2b850_1, 412, 31, 0);
    tail_fn_00a2b850(&g_tail_00a2b850);
}