// from server: 100% by colin
// roc 2008-06 007ef340  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef340
//
// 007ef340  6a05                 push 5
// 007ef342  6831010000           push 0x131
// 007ef347  68605b8100           push 0x815b60
// 007ef34c  686c5b8100           push 0x815b6c
// 007ef351  b9c8d29600           mov ecx, 0x96d2c8
// 007ef356  e82553c5ff           call 0x444680
// 007ef35b  68e0aa7f00           push 0x7faae0
// 007ef360  e84a24ebff           call 0x6a17af
// 007ef365  59                   pop ecx
// 007ef366  c3                   ret 

extern int g_007ef340_0;
extern int g_007ef340_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef340(void*);
struct O_007ef340 { int m(void*, void*, int, int); };
extern O_007ef340 g_obj_007ef340;
extern int g_tail_007ef340;
void func_007ef340()
{
    g_obj_007ef340.m((void*)&g_007ef340_0, (void*)&g_007ef340_1, 305, 5);
    tail_fn_007ef340(&g_tail_007ef340);
}