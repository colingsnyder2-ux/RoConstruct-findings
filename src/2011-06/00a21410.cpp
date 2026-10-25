// from server: 100% by colin
// roc 2011-06 00a21410  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21410
//
// 00a21410  6a00                 push 0
// 00a21412  68840ca900           push 0xa90c84
// 00a21417  68bc0ca900           push 0xa90cbc
// 00a2141c  68b8000000           push 0xb8
// 00a21421  b968abcc00           mov ecx, 0xccab68
// 00a21426  e88549bcff           call 0x5e5db0
// 00a2142b  682095a300           push 0xa39520
// 00a21430  e8289ddeff           call 0x80b15d
// 00a21435  59                   pop ecx
// 00a21436  c3                   ret 

extern int g_00a21410_1;
extern int g_00a21410_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a21410(void*);
struct O_00a21410 { int m(int, void*, void*, int); };
extern O_00a21410 g_obj_00a21410;
extern int g_tail_00a21410;
void func_00a21410()
{
    g_obj_00a21410.m(184, (void*)&g_00a21410_1, (void*)&g_00a21410_2, 0);
    tail_fn_00a21410(&g_tail_00a21410);
}