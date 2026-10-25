// from server: 100% by colin
// roc 2010-06 009d45a0  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d45a0
//
// 009d45a0  6a0f                 push 0xf
// 009d45a2  6800897100           push 0x718900
// 009d45a7  6890877100           push 0x718790
// 009d45ac  680c03a400           push 0xa4030c
// 009d45b1  684403a400           push 0xa40344
// 009d45b6  b95cecc100           mov ecx, 0xc1ec5c
// 009d45bb  e8109cccff           call 0x69e1d0
// 009d45c0  68405b9e00           push 0x9e5b40
// 009d45c5  e89944ddff           call 0x7a8a63
// 009d45ca  59                   pop ecx
// 009d45cb  c3                   ret 

extern int g_009d45a0_0;
extern int g_009d45a0_1;
extern int g_009d45a0_2;
extern int g_009d45a0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d45a0(void*);
struct O_009d45a0 { int m(void*, void*, void*, void*, int); };
extern O_009d45a0 g_obj_009d45a0;
extern int g_tail_009d45a0;
void func_009d45a0()
{
    g_obj_009d45a0.m((void*)&g_009d45a0_0, (void*)&g_009d45a0_1, (void*)&g_009d45a0_2, (void*)&g_009d45a0_3, 15);
    tail_fn_009d45a0(&g_tail_009d45a0);
}