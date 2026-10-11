// from server: 100% by colin
// roc 2007-08 00774280  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774280
//
// 00774280  6a05                 push 5
// 00774282  68e8000000           push 0xe8
// 00774287  6840a87a00           push 0x7aa840
// 0077428c  6878837b00           push 0x7b8378
// 00774291  b9f45f8c00           mov ecx, 0x8c5ff4
// 00774296  e8b51de4ff           call 0x5b6050
// 0077429b  68c0b77700           push 0x77b7c0
// 007742a0  e87ecaebff           call 0x630d23
// 007742a5  59                   pop ecx
// 007742a6  c3                   ret 

extern int g_00774280_0;
extern int g_00774280_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00774280(void*);
struct O_00774280 { int m(void*, void*, int, int); };
extern O_00774280 g_obj_00774280;
extern int g_tail_00774280;
void func_00774280()
{
    g_obj_00774280.m((void*)&g_00774280_0, (void*)&g_00774280_1, 232, 5);
    tail_fn_00774280(&g_tail_00774280);
}