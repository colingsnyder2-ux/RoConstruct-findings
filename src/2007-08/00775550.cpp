// from server: 100% by colin
// roc 2007-08 00775550  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775550
//
// 00775550  6a05                 push 5
// 00775552  6800010000           push 0x100
// 00775557  6844fd7b00           push 0x7bfd44
// 0077555c  68304a7800           push 0x784a30
// 00775561  b9f8748c00           mov ecx, 0x8c74f8
// 00775566  e8958ce7ff           call 0x5ee200
// 0077556b  68d0c07700           push 0x77c0d0
// 00775570  e8aeb7ebff           call 0x630d23
// 00775575  59                   pop ecx
// 00775576  c3                   ret 

extern int g_00775550_0;
extern int g_00775550_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775550(void*);
struct O_00775550 { int m(void*, void*, int, int); };
extern O_00775550 g_obj_00775550;
extern int g_tail_00775550;
void func_00775550()
{
    g_obj_00775550.m((void*)&g_00775550_0, (void*)&g_00775550_1, 256, 5);
    tail_fn_00775550(&g_tail_00775550);
}