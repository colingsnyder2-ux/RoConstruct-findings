// from server: 100% by colin
// roc 2011-06 00a227f0  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a227f0
//
// 00a227f0  6a03                 push 3
// 00a227f2  682c51a900           push 0xa9512c
// 00a227f7  68fca1a800           push 0xa8a1fc
// 00a227fc  684054a900           push 0xa95440
// 00a22801  6810020000           push 0x210
// 00a22806  b9d0becc00           mov ecx, 0xccbed0
// 00a2280b  e850e1bfff           call 0x620960
// 00a22810  68709ca300           push 0xa39c70
// 00a22815  e84389deff           call 0x80b15d
// 00a2281a  59                   pop ecx
// 00a2281b  c3                   ret 

extern int g_00a227f0_1;
extern int g_00a227f0_2;
extern int g_00a227f0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a227f0(void*);
struct O_00a227f0 { int m(int, void*, void*, void*, int); };
extern O_00a227f0 g_obj_00a227f0;
extern int g_tail_00a227f0;
void func_00a227f0()
{
    g_obj_00a227f0.m(528, (void*)&g_00a227f0_1, (void*)&g_00a227f0_2, (void*)&g_00a227f0_3, 3);
    tail_fn_00a227f0(&g_tail_00a227f0);
}