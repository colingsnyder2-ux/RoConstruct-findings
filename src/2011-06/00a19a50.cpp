// from server: 100% by colin
// roc 2011-06 00a19a50  unit: seg_00a10000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19a50
//
// 00a19a50  6a00                 push 0
// 00a19a52  68389ea700           push 0xa79e38
// 00a19a57  68309ea700           push 0xa79e30
// 00a19a5c  6800ada700           push 0xa7ad00
// 00a19a61  6860010000           push 0x160
// 00a19a66  b99480cb00           mov ecx, 0xcb8094
// 00a19a6b  e86016adff           call 0x4eb0d0
// 00a19a70  68503aa300           push 0xa33a50
// 00a19a75  e8e316dfff           call 0x80b15d
// 00a19a7a  59                   pop ecx
// 00a19a7b  c3                   ret 

extern int g_00a19a50_1;
extern int g_00a19a50_2;
extern int g_00a19a50_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19a50(void*);
struct O_00a19a50 { int m(int, void*, void*, void*, int); };
extern O_00a19a50 g_obj_00a19a50;
extern int g_tail_00a19a50;
void func_00a19a50()
{
    g_obj_00a19a50.m(352, (void*)&g_00a19a50_1, (void*)&g_00a19a50_2, (void*)&g_00a19a50_3, 0);
    tail_fn_00a19a50(&g_tail_00a19a50);
}