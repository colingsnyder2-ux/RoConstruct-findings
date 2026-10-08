// from server: 64% by colin
// roc 2007-08 00698940  unit: CXTPPropertyGridItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698940
//
// 00698940  56                   push esi
// 00698941  8bf1                 mov esi, ecx
// 00698943  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00698949  ff1598dd7700         call dword ptr [0x77dd98]
// 0069894f  50                   push eax
// 00698950  8d8ea4000000         lea ecx, [esi + 0xa4]
// 00698956  ff15b8dc7700         call dword ptr [0x77dcb8]
// 0069895c  f7d8                 neg eax
// 0069895e  1bc0                 sbb eax, eax
// 00698960  f7d8                 neg eax
// 00698962  5e                   pop esi
// 00698963  c3                   ret 

struct CXTPPropertyGridItem {
    char pad[0xa0];
    int field_a0;
    int field_a4;
    int f();
};

extern "C" int __stdcall sub_77dd98(int);
extern "C" int __stdcall sub_77dcb8(int);

int CXTPPropertyGridItem::f() {
    int a = sub_77dd98(this->field_a0);
    int b = sub_77dcb8(this->field_a4);
    return (b == a) ? 1 : 0;
}
