// from server: 100% by colin
// roc 2007-08 00774370  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774370
//
// 00774370  6a05                 push 5
// 00774372  6888010000           push 0x188
// 00774377  6840a87a00           push 0x7aa840
// 0077437c  68b4837b00           push 0x7b83b4
// 00774381  b9d85f8c00           mov ecx, 0x8c5fd8
// 00774386  e8c51ce4ff           call 0x5b6050
// 0077438b  6880b77700           push 0x77b780
// 00774390  e88ec9ebff           call 0x630d23
// 00774395  59                   pop ecx
// 00774396  c3                   ret 

extern int g_00774370_0;
extern int g_00774370_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00774370(void*);
struct O_00774370 { int m(void*, void*, int, int); };
extern O_00774370 g_obj_00774370;
extern int g_tail_00774370;
void func_00774370()
{
    g_obj_00774370.m((void*)&g_00774370_0, (void*)&g_00774370_1, 392, 5);
    tail_fn_00774370(&g_tail_00774370);
}