// from server: 100% by colin
// roc 2011-06 00a2bc50  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bc50
//
// 00a2bc50  6a00                 push 0
// 00a2bc52  6a1f                 push 0x1f
// 00a2bc54  6860010000           push 0x160
// 00a2bc59  6880d2aa00           push 0xaad280
// 00a2bc5e  6860d3aa00           push 0xaad360
// 00a2bc63  b9b82acd00           mov ecx, 0xcd2ab8
// 00a2bc68  e84373cdff           call 0x702fb0
// 00a2bc6d  68c0dda300           push 0xa3ddc0
// 00a2bc72  e8e6f4ddff           call 0x80b15d
// 00a2bc77  59                   pop ecx
// 00a2bc78  c3                   ret 

extern int g_00a2bc50_0;
extern int g_00a2bc50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bc50(void*);
struct O_00a2bc50 { int m(void*, void*, int, int, int); };
extern O_00a2bc50 g_obj_00a2bc50;
extern int g_tail_00a2bc50;
void func_00a2bc50()
{
    g_obj_00a2bc50.m((void*)&g_00a2bc50_0, (void*)&g_00a2bc50_1, 352, 31, 0);
    tail_fn_00a2bc50(&g_tail_00a2bc50);
}