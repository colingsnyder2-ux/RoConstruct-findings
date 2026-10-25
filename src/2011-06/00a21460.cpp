// from server: 100% by colin
// roc 2011-06 00a21460  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21460
//
// 00a21460  6a00                 push 0
// 00a21462  68dc23a900           push 0xa923dc
// 00a21467  68d423a900           push 0xa923d4
// 00a2146c  68c823a900           push 0xa923c8
// 00a21471  68b40b0000           push 0xbb4
// 00a21476  b978aecc00           mov ecx, 0xccae78
// 00a2147b  e8f023bdff           call 0x5f3870
// 00a21480  688099a300           push 0xa39980
// 00a21485  e8d39cdeff           call 0x80b15d
// 00a2148a  59                   pop ecx
// 00a2148b  c3                   ret 

extern int g_00a21460_1;
extern int g_00a21460_2;
extern int g_00a21460_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a21460(void*);
struct O_00a21460 { int m(int, void*, void*, void*, int); };
extern O_00a21460 g_obj_00a21460;
extern int g_tail_00a21460;
void func_00a21460()
{
    g_obj_00a21460.m(2996, (void*)&g_00a21460_1, (void*)&g_00a21460_2, (void*)&g_00a21460_3, 0);
    tail_fn_00a21460(&g_tail_00a21460);
}