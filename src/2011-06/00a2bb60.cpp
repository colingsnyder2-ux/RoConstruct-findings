// from server: 100% by colin
// roc 2011-06 00a2bb60  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bb60
//
// 00a2bb60  6a00                 push 0
// 00a2bb62  6a1f                 push 0x1f
// 00a2bb64  6860010000           push 0x160
// 00a2bb69  6880d2aa00           push 0xaad280
// 00a2bb6e  6854d3aa00           push 0xaad354
// 00a2bb73  b9602dcd00           mov ecx, 0xcd2d60
// 00a2bb78  e89372cdff           call 0x702e10
// 00a2bb7d  6860dda300           push 0xa3dd60
// 00a2bb82  e8d6f5ddff           call 0x80b15d
// 00a2bb87  59                   pop ecx
// 00a2bb88  c3                   ret 

extern int g_00a2bb60_0;
extern int g_00a2bb60_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bb60(void*);
struct O_00a2bb60 { int m(void*, void*, int, int, int); };
extern O_00a2bb60 g_obj_00a2bb60;
extern int g_tail_00a2bb60;
void func_00a2bb60()
{
    g_obj_00a2bb60.m((void*)&g_00a2bb60_0, (void*)&g_00a2bb60_1, 352, 31, 0);
    tail_fn_00a2bb60(&g_tail_00a2bb60);
}