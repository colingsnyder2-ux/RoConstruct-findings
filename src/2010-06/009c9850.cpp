// from server: 100% by colin
// roc 2010-06 009c9850  unit: seg_009c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9850
//
// 009c9850  6a01                 push 1
// 009c9852  6a00                 push 0
// 009c9854  68389fa200           push 0xa29f38
// 009c9859  682c9fa200           push 0xa29f2c
// 009c985e  6a78                 push 0x78
// 009c9860  b908b6c000           mov ecx, 0xc0b608
// 009c9865  e836e8bcff           call 0x5980a0
// 009c986a  6860ed9d00           push 0x9ded60
// 009c986f  e8eff1ddff           call 0x7a8a63
// 009c9874  59                   pop ecx
// 009c9875  c3                   ret 

extern int g_009c9850_1;
extern int g_009c9850_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9850(void*);
struct O_009c9850 { int m(int, void*, void*, int, int); };
extern O_009c9850 g_obj_009c9850;
extern int g_tail_009c9850;
void func_009c9850()
{
    g_obj_009c9850.m(120, (void*)&g_009c9850_1, (void*)&g_009c9850_2, 0, 1);
    tail_fn_009c9850(&g_tail_009c9850);
}