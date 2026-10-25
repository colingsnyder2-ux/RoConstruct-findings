// from server: 100% by colin
// roc 2010-06 009d4870  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4870
//
// 009d4870  6a0f                 push 0xf
// 009d4872  68b0887100           push 0x7188b0
// 009d4877  6870877100           push 0x718770
// 009d487c  683884a100           push 0xa18438
// 009d4881  682804a400           push 0xa40428
// 009d4886  b930eac100           mov ecx, 0xc1ea30
// 009d488b  e8709eccff           call 0x69e700
// 009d4890  68605d9e00           push 0x9e5d60
// 009d4895  e8c941ddff           call 0x7a8a63
// 009d489a  59                   pop ecx
// 009d489b  c3                   ret 

extern int g_009d4870_0;
extern int g_009d4870_1;
extern int g_009d4870_2;
extern int g_009d4870_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4870(void*);
struct O_009d4870 { int m(void*, void*, void*, void*, int); };
extern O_009d4870 g_obj_009d4870;
extern int g_tail_009d4870;
void func_009d4870()
{
    g_obj_009d4870.m((void*)&g_009d4870_0, (void*)&g_009d4870_1, (void*)&g_009d4870_2, (void*)&g_009d4870_3, 15);
    tail_fn_009d4870(&g_tail_009d4870);
}