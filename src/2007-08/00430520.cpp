// from server: 86% by colin
// roc 2007-08 00430520  unit: CPatchedControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430520
//
// 00430520  56                   push esi
// 00430521  57                   push edi
// 00430522  8bf9                 mov edi, ecx
// 00430524  e867ffffff           call 0x430490
// 00430529  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043052d  8bf0                 mov esi, eax
// 0043052f  8b06                 mov eax, dword ptr [esi]
// 00430531  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00430537  51                   push ecx
// 00430538  57                   push edi
// 00430539  8bce                 mov ecx, esi
// 0043053b  ffd2                 call edx
// 0043053d  5f                   pop edi
// 0043053e  8bc6                 mov eax, esi
// 00430540  5e                   pop esi
// 00430541  c20400               ret 4

struct CPatchedControlComboBox {
    void* getSomething();
    void* method(void*);
};

void* CPatchedControlComboBox::method(void* arg)
{
    void* p = this->getSomething();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtbl[0xe0 / 4];
    fn(p, arg);
    return p;
}
