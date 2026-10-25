// from server: 100% by colin
// roc 2010-06 009d48a0  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d48a0
//
// 009d48a0  6a0f                 push 0xf
// 009d48a2  6800897100           push 0x718900
// 009d48a7  6890877100           push 0x718790
// 009d48ac  680c03a400           push 0xa4030c
// 009d48b1  683404a400           push 0xa40434
// 009d48b6  b9bcebc100           mov ecx, 0xc1ebbc
// 009d48bb  e8209fccff           call 0x69e7e0
// 009d48c0  68405d9e00           push 0x9e5d40
// 009d48c5  e89941ddff           call 0x7a8a63
// 009d48ca  59                   pop ecx
// 009d48cb  c3                   ret 

extern int g_009d48a0_0;
extern int g_009d48a0_1;
extern int g_009d48a0_2;
extern int g_009d48a0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d48a0(void*);
struct O_009d48a0 { int m(void*, void*, void*, void*, int); };
extern O_009d48a0 g_obj_009d48a0;
extern int g_tail_009d48a0;
void func_009d48a0()
{
    g_obj_009d48a0.m((void*)&g_009d48a0_0, (void*)&g_009d48a0_1, (void*)&g_009d48a0_2, (void*)&g_009d48a0_3, 15);
    tail_fn_009d48a0(&g_tail_009d48a0);
}