// from server: 100% by colin
// roc 2011-06 00a18620  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18620
//
// 00a18620  6a02                 push 2
// 00a18622  68d086a700           push 0xa786d0
// 00a18627  68ac94a700           push 0xa794ac
// 00a1862c  6810020000           push 0x210
// 00a18631  b9d067cb00           mov ecx, 0xcb67d0
// 00a18636  e8a5c5abff           call 0x4d4be0
// 00a1863b  681030a300           push 0xa33010
// 00a18640  e8182bdfff           call 0x80b15d
// 00a18645  59                   pop ecx
// 00a18646  c3                   ret 

extern int g_00a18620_1;
extern int g_00a18620_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a18620(void*);
struct O_00a18620 { int m(int, void*, void*, int); };
extern O_00a18620 g_obj_00a18620;
extern int g_tail_00a18620;
void func_00a18620()
{
    g_obj_00a18620.m(528, (void*)&g_00a18620_1, (void*)&g_00a18620_2, 2);
    tail_fn_00a18620(&g_tail_00a18620);
}