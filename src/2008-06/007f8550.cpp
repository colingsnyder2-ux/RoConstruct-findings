// from server: 100% by colin
// roc 2008-06 007f8550  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8550
//
// 007f8550  6a05                 push 5
// 007f8552  6848010000           push 0x148
// 007f8557  68b8818400           push 0x8481b8
// 007f855c  68cc828400           push 0x8482cc
// 007f8561  b998c99700           mov ecx, 0x97c998
// 007f8566  e84599e3ff           call 0x631eb0
// 007f856b  6890078000           push 0x800790
// 007f8570  e83a92eaff           call 0x6a17af
// 007f8575  59                   pop ecx
// 007f8576  c3                   ret 

extern int g_007f8550_0;
extern int g_007f8550_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8550(void*);
struct O_007f8550 { int m(void*, void*, int, int); };
extern O_007f8550 g_obj_007f8550;
extern int g_tail_007f8550;
void func_007f8550()
{
    g_obj_007f8550.m((void*)&g_007f8550_0, (void*)&g_007f8550_1, 328, 5);
    tail_fn_007f8550(&g_tail_007f8550);
}