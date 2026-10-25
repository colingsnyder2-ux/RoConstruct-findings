// from server: 100% by colin
// roc 2011-06 00a2e300  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2e300
//
// 00a2e300  6a02                 push 2
// 00a2e302  687c43ab00           push 0xab437c
// 00a2e307  688c84a700           push 0xa7848c
// 00a2e30c  688843ab00           push 0xab4388
// 00a2e311  689c000000           push 0x9c
// 00a2e316  b9904acd00           mov ecx, 0xcd4a90
// 00a2e31b  e880ccd0ff           call 0x73afa0
// 00a2e320  68a0f2a300           push 0xa3f2a0
// 00a2e325  e833ceddff           call 0x80b15d
// 00a2e32a  59                   pop ecx
// 00a2e32b  c3                   ret 

extern int g_00a2e300_1;
extern int g_00a2e300_2;
extern int g_00a2e300_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2e300(void*);
struct O_00a2e300 { int m(int, void*, void*, void*, int); };
extern O_00a2e300 g_obj_00a2e300;
extern int g_tail_00a2e300;
void func_00a2e300()
{
    g_obj_00a2e300.m(156, (void*)&g_00a2e300_1, (void*)&g_00a2e300_2, (void*)&g_00a2e300_3, 2);
    tail_fn_00a2e300(&g_tail_00a2e300);
}