// from server: 100% by colin
// roc 2011-06 00a2bb30  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bb30
//
// 00a2bb30  6a00                 push 0
// 00a2bb32  6a1f                 push 0x1f
// 00a2bb34  6854010000           push 0x154
// 00a2bb39  6880d2aa00           push 0xaad280
// 00a2bb3e  682cd3aa00           push 0xaad32c
// 00a2bb43  b9a02dcd00           mov ecx, 0xcd2da0
// 00a2bb48  e8c372cdff           call 0x702e10
// 00a2bb4d  6880dda300           push 0xa3dd80
// 00a2bb52  e806f6ddff           call 0x80b15d
// 00a2bb57  59                   pop ecx
// 00a2bb58  c3                   ret 

extern int g_00a2bb30_0;
extern int g_00a2bb30_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bb30(void*);
struct O_00a2bb30 { int m(void*, void*, int, int, int); };
extern O_00a2bb30 g_obj_00a2bb30;
extern int g_tail_00a2bb30;
void func_00a2bb30()
{
    g_obj_00a2bb30.m((void*)&g_00a2bb30_0, (void*)&g_00a2bb30_1, 340, 31, 0);
    tail_fn_00a2bb30(&g_tail_00a2bb30);
}