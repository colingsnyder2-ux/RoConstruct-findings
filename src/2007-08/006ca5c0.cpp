// from server: 100% by colin
// roc 2007-08 006ca5c0  unit: CXTPToolBar::CControlButtonHide  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca5c0
//
// 006ca5c0  56                   push esi
// 006ca5c1  57                   push edi
// 006ca5c2  8bf9                 mov edi, ecx
// 006ca5c4  e887ffffff           call 0x6ca550
// 006ca5c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ca5cd  8bf0                 mov esi, eax
// 006ca5cf  8b06                 mov eax, dword ptr [esi]
// 006ca5d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006ca5d7  51                   push ecx
// 006ca5d8  57                   push edi
// 006ca5d9  8bce                 mov ecx, esi
// 006ca5db  ffd2                 call edx
// 006ca5dd  5f                   pop edi
// 006ca5de  8bc6                 mov eax, esi
// 006ca5e0  5e                   pop esi
// 006ca5e1  c20400               ret 4

struct CXTPToolBar_CControlButtonHide
{
    void* method_006ca550();
    void* method_006ca5c0(void* arg);
};

void* CXTPToolBar_CControlButtonHide::method_006ca5c0(void* arg)
{
    void* result = method_006ca550();
    void** vtable = *(void***)result;
    void (__thiscall *fn)(void*, void*, void*) = (void (__thiscall *)(void*, void*, void*))vtable[0xe0 / 4];
    fn(result, this, arg);
    return result;
}
