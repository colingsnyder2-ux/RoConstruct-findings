// from server: 100% by colin
// roc 2010-06 009d4660  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4660
//
// 009d4660  6a0f                 push 0xf
// 009d4662  6800897100           push 0x718900
// 009d4667  6890877100           push 0x718790
// 009d466c  680c03a400           push 0xa4030c
// 009d4671  688403a400           push 0xa40384
// 009d4676  b9ecedc100           mov ecx, 0xc1edec
// 009d467b  e8b09cccff           call 0x69e330
// 009d4680  68c05b9e00           push 0x9e5bc0
// 009d4685  e8d943ddff           call 0x7a8a63
// 009d468a  59                   pop ecx
// 009d468b  c3                   ret 

extern int g_009d4660_0;
extern int g_009d4660_1;
extern int g_009d4660_2;
extern int g_009d4660_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4660(void*);
struct O_009d4660 { int m(void*, void*, void*, void*, int); };
extern O_009d4660 g_obj_009d4660;
extern int g_tail_009d4660;
void func_009d4660()
{
    g_obj_009d4660.m((void*)&g_009d4660_0, (void*)&g_009d4660_1, (void*)&g_009d4660_2, (void*)&g_009d4660_3, 15);
    tail_fn_009d4660(&g_tail_009d4660);
}