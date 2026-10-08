// from server: 91% by colin
// roc 2007-08 00637820  unit: CXTPControlComboBoxList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637820
//
// 00637820  56                   push esi
// 00637821  57                   push edi
// 00637822  8bf9                 mov edi, ecx
// 00637824  e887ffffff           call 0x6377b0
// 00637829  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063782d  8bf0                 mov esi, eax
// 0063782f  8b06                 mov eax, dword ptr [esi]
// 00637831  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 00637837  51                   push ecx
// 00637838  57                   push edi
// 00637839  8bce                 mov ecx, esi
// 0063783b  ffd2                 call edx
// 0063783d  5f                   pop edi
// 0063783e  8bc6                 mov eax, esi
// 00637840  5e                   pop esi
// 00637841  c20400               ret 4

struct CXTPControlComboBoxList {
    void* sub_6377b0();
    void* method(int);
};

void* CXTPControlComboBoxList::method(int arg) {
    void* p = sub_6377b0();
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vtbl[0x1c8 / 4];
    fn(p, this, arg);
    return p;
}
