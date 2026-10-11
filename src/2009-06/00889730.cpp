// from server: 100% by colin
// roc 2009-06 00889730  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889730
//
// 00889730  6a07                 push 7
// 00889732  6899000000           push 0x99
// 00889737  68884d8d00           push 0x8d4d88
// 0088973c  68744d8d00           push 0x8d4d74
// 00889741  b9c835a400           mov ecx, 0xa435c8
// 00889746  e8751bd4ff           call 0x5cb2c0
// 0088974b  68a0718900           push 0x8971a0
// 00889750  e8a603e9ff           call 0x719afb
// 00889755  59                   pop ecx
// 00889756  c3                   ret 

extern int g_00889730_0;
extern int g_00889730_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00889730(void*);
struct O_00889730 { int m(void*, void*, int, int); };
extern O_00889730 g_obj_00889730;
extern int g_tail_00889730;
void func_00889730()
{
    g_obj_00889730.m((void*)&g_00889730_0, (void*)&g_00889730_1, 153, 7);
    tail_fn_00889730(&g_tail_00889730);
}