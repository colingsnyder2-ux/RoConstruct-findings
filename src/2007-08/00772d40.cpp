// from server: 100% by colin
// roc 2007-08 00772d40  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772d40
//
// 00772d40  6a05                 push 5
// 00772d42  681c010000           push 0x11c
// 00772d47  6848647a00           push 0x7a6448
// 00772d4c  687cf67a00           push 0x7af67c
// 00772d51  b978338c00           mov ecx, 0x8c3378
// 00772d56  e81580e1ff           call 0x58ad70
// 00772d5b  6810a77700           push 0x77a710
// 00772d60  e8bedfebff           call 0x630d23
// 00772d65  59                   pop ecx
// 00772d66  c3                   ret 

extern int g_00772d40_0;
extern int g_00772d40_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00772d40(void*);
struct O_00772d40 { int m(void*, void*, int, int); };
extern O_00772d40 g_obj_00772d40;
extern int g_tail_00772d40;
void func_00772d40()
{
    g_obj_00772d40.m((void*)&g_00772d40_0, (void*)&g_00772d40_1, 284, 5);
    tail_fn_00772d40(&g_tail_00772d40);
}