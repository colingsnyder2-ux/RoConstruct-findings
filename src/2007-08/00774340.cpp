// from server: 100% by colin
// roc 2007-08 00774340  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774340
//
// 00774340  6a05                 push 5
// 00774342  6868010000           push 0x168
// 00774347  6840a87a00           push 0x7aa840
// 0077434c  68a8837b00           push 0x7b83a8
// 00774351  b92c608c00           mov ecx, 0x8c602c
// 00774356  e8f51ce4ff           call 0x5b6050
// 0077435b  6860b77700           push 0x77b760
// 00774360  e8bec9ebff           call 0x630d23
// 00774365  59                   pop ecx
// 00774366  c3                   ret 

extern int g_00774340_0;
extern int g_00774340_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00774340(void*);
struct O_00774340 { int m(void*, void*, int, int); };
extern O_00774340 g_obj_00774340;
extern int g_tail_00774340;
void func_00774340()
{
    g_obj_00774340.m((void*)&g_00774340_0, (void*)&g_00774340_1, 360, 5);
    tail_fn_00774340(&g_tail_00774340);
}