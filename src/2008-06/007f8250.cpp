// from server: 100% by colin
// roc 2008-06 007f8250  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8250
//
// 007f8250  6a05                 push 5
// 007f8252  685c010000           push 0x15c
// 007f8257  68b8818400           push 0x8481b8
// 007f825c  6874828400           push 0x848274
// 007f8261  b9b0ca9700           mov ecx, 0x97cab0
// 007f8266  e82594e3ff           call 0x631690
// 007f826b  6810088000           push 0x800810
// 007f8270  e83a95eaff           call 0x6a17af
// 007f8275  59                   pop ecx
// 007f8276  c3                   ret 

extern int g_007f8250_0;
extern int g_007f8250_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8250(void*);
struct O_007f8250 { int m(void*, void*, int, int); };
extern O_007f8250 g_obj_007f8250;
extern int g_tail_007f8250;
void func_007f8250()
{
    g_obj_007f8250.m((void*)&g_007f8250_0, (void*)&g_007f8250_1, 348, 5);
    tail_fn_007f8250(&g_tail_007f8250);
}