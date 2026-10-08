// from server: 75% by colin
// roc 2007-08 0067e270  unit: CXTPControlOleItems  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067e270
//
// 0067e270  56                   push esi
// 0067e271  57                   push edi
// 0067e272  8bf9                 mov edi, ecx
// 0067e274  e887ffffff           call 0x67e200
// 0067e279  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067e27d  8bf0                 mov esi, eax
// 0067e27f  8b06                 mov eax, dword ptr [esi]
// 0067e281  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067e287  51                   push ecx
// 0067e288  57                   push edi
// 0067e289  8bce                 mov ecx, esi
// 0067e28b  ffd2                 call edx
// 0067e28d  5f                   pop edi
// 0067e28e  8bc6                 mov eax, esi
// 0067e290  5e                   pop esi
// 0067e291  c20400               ret 4

struct CXTPControlOleItems {
    void* getItem(int index);
    void* getItemData(int index);
};

void* CXTPControlOleItems::getItemData(int index) {
    CXTPControlOleItems* pThis = this;
    void* item = pThis->getItem(index);
    void* vtable = *(void**)item;
    void* result = ((void* (__thiscall*)(void*, void*))*(void**)((char*)vtable + 0xe0))(item, pThis);
    return item;
}
