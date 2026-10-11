// from server: 100% by colin
// roc 2008-06 007ef370  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef370
//
// 007ef370  6a05                 push 5
// 007ef372  6832010000           push 0x132
// 007ef377  68605b8100           push 0x815b60
// 007ef37c  68785b8100           push 0x815b78
// 007ef381  b9e4d29600           mov ecx, 0x96d2e4
// 007ef386  e8f552c5ff           call 0x444680
// 007ef38b  6880aa7f00           push 0x7faa80
// 007ef390  e81a24ebff           call 0x6a17af
// 007ef395  59                   pop ecx
// 007ef396  c3                   ret 

extern int g_007ef370_0;
extern int g_007ef370_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef370(void*);
struct O_007ef370 { int m(void*, void*, int, int); };
extern O_007ef370 g_obj_007ef370;
extern int g_tail_007ef370;
void func_007ef370()
{
    g_obj_007ef370.m((void*)&g_007ef370_0, (void*)&g_007ef370_1, 306, 5);
    tail_fn_007ef370(&g_tail_007ef370);
}