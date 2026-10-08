// from server: 73% by colin
// roc 2007-08 0064b230  unit: CXTPImageManagerIcon  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b230
//
// 0064b230  0fb7442404           movzx eax, word ptr [esp + 4]
// 0064b235  50                   push eax
// 0064b236  6a02                 push 2
// 0064b238  50                   push eax
// 0064b239  e83a52feff           call 0x630478
// 0064b23e  50                   push eax
// 0064b23f  e81ce0ffff           call 0x649260
// 0064b244  83c408               add esp, 8
// 0064b247  c3                   ret 

extern "C" int __stdcall sub_630478(unsigned short, int, unsigned short);
extern "C" int __cdecl sub_649260(int);

int __stdcall sub_64b230(unsigned short a)
{
    return sub_649260(sub_630478(a, 2, a));
}
