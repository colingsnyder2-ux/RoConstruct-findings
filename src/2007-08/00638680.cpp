// from server: 78% by colin
// roc 2007-08 00638680  unit: CXTPControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00638680
//
// 00638680  56                   push esi
// 00638681  57                   push edi
// 00638682  8bf9                 mov edi, ecx
// 00638684  e887ffffff           call 0x638610
// 00638689  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063868d  8bf0                 mov esi, eax
// 0063868f  8b06                 mov eax, dword ptr [esi]
// 00638691  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00638697  51                   push ecx
// 00638698  57                   push edi
// 00638699  8bce                 mov ecx, esi
// 0063869b  ffd2                 call edx
// 0063869d  5f                   pop edi
// 0063869e  8bc6                 mov eax, esi
// 006386a0  5e                   pop esi
// 006386a1  c20400               ret 4

struct CXTPControlComboBox {
    void* sub_638610();
    void vfunc_e0(void*);
    void* method(void*);
};

void* CXTPControlComboBox::method(void* arg) {
    CXTPControlComboBox* p = (CXTPControlComboBox*)sub_638610();
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0xe0 / 4];
    fn(p, arg);
    return p;
}
