// from server: 32% by colin
// roc 2007-08 00601400  unit: RBX::VWidget::?$NonFactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601400
//
// 00601400  51                   push ecx
// 00601401  56                   push esi
// 00601402  57                   push edi
// 00601403  8bf1                 mov esi, ecx
// 00601405  c744240800000000     mov dword ptr [esp + 8], 0
// 0060140d  e87effffff           call 0x601390
// 00601412  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00601416  81c6f8000000         add esi, 0xf8
// 0060141c  56                   push esi
// 0060141d  8bcf                 mov ecx, edi
// 0060141f  ff159ce67700         call dword ptr [0x77e69c]
// 00601425  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00601428  89471c               mov dword ptr [edi + 0x1c], eax
// 0060142b  8bc7                 mov eax, edi
// 0060142d  5f                   pop edi
// 0060142e  5e                   pop esi
// 0060142f  59                   pop ecx
// 00601430  c20400               ret 4

struct Base {
    char pad[0x1c];
    int field1c;
};

struct Widget {
    char pad[0xf8];
    Base base;
};

struct NonFactoryProduct : Widget {
    NonFactoryProduct(const NonFactoryProduct& other);
};

extern "C" void __stdcall sub_601390();

NonFactoryProduct::NonFactoryProduct(const NonFactoryProduct& other) {
    sub_601390();
    const Base* src = &other.base;
    Base* dst = &base;
    dst->field1c = src->field1c;
}
