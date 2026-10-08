// from server: 100% by colin
// roc 2007-08 0067dac0  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067dac0
//
// 0067dac0  56                   push esi
// 0067dac1  57                   push edi
// 0067dac2  8bf9                 mov edi, ecx
// 0067dac4  e887ffffff           call 0x67da50
// 0067dac9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067dacd  8bf0                 mov esi, eax
// 0067dacf  8b06                 mov eax, dword ptr [esi]
// 0067dad1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067dad7  51                   push ecx
// 0067dad8  57                   push edi
// 0067dad9  8bce                 mov ecx, esi
// 0067dadb  ffd2                 call edx
// 0067dadd  5f                   pop edi
// 0067dade  8bc6                 mov eax, esi
// 0067dae0  5e                   pop esi
// 0067dae1  c20400               ret 4

struct CXTPControlWindowList {
    void* GetSite();
    void* CreateControl(void*);
};

void* CXTPControlWindowList::CreateControl(void* arg) {
    void* p = GetSite();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*, void*) = (void (__thiscall *)(void*, void*, void*))vtbl[0xe0 / 4];
    fn(p, this, arg);
    return p;
}
