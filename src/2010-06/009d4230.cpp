// from server: 100% by colin
// roc 2010-06 009d4230  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4230
//
// 009d4230  6a00                 push 0
// 009d4232  6a0f                 push 0xf
// 009d4234  68f4000000           push 0xf4
// 009d4239  68d403a300           push 0xa303d4
// 009d423e  68acf5a300           push 0xa3f5ac
// 009d4243  b934e9c100           mov ecx, 0xc1e934
// 009d4248  e86379ccff           call 0x69bbb0
// 009d424d  6860599e00           push 0x9e5960
// 009d4252  e80c48ddff           call 0x7a8a63
// 009d4257  59                   pop ecx
// 009d4258  c3                   ret 

extern int g_009d4230_0;
extern int g_009d4230_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4230(void*);
struct O_009d4230 { int m(void*, void*, int, int, int); };
extern O_009d4230 g_obj_009d4230;
extern int g_tail_009d4230;
void func_009d4230()
{
    g_obj_009d4230.m((void*)&g_009d4230_0, (void*)&g_009d4230_1, 244, 15, 0);
    tail_fn_009d4230(&g_tail_009d4230);
}