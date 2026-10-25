// from server: 100% by colin
// roc 2011-06 00a2ba40  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ba40
//
// 00a2ba40  6a00                 push 0
// 00a2ba42  6a1f                 push 0x1f
// 00a2ba44  6858010000           push 0x158
// 00a2ba49  6880d2aa00           push 0xaad280
// 00a2ba4e  682cd3aa00           push 0xaad32c
// 00a2ba53  b9902ecd00           mov ecx, 0xcd2e90
// 00a2ba58  e81372cdff           call 0x702c70
// 00a2ba5d  6840dda300           push 0xa3dd40
// 00a2ba62  e8f6f6ddff           call 0x80b15d
// 00a2ba67  59                   pop ecx
// 00a2ba68  c3                   ret 

extern int g_00a2ba40_0;
extern int g_00a2ba40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2ba40(void*);
struct O_00a2ba40 { int m(void*, void*, int, int, int); };
extern O_00a2ba40 g_obj_00a2ba40;
extern int g_tail_00a2ba40;
void func_00a2ba40()
{
    g_obj_00a2ba40.m((void*)&g_00a2ba40_0, (void*)&g_00a2ba40_1, 344, 31, 0);
    tail_fn_00a2ba40(&g_tail_00a2ba40);
}