// from server: 100% by colin
// roc 2007-08 00672af0  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672af0
//
// 00672af0  56                   push esi
// 00672af1  57                   push edi
// 00672af2  8bf9                 mov edi, ecx
// 00672af4  e887ffffff           call 0x672a80
// 00672af9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00672afd  8bf0                 mov esi, eax
// 00672aff  8b06                 mov eax, dword ptr [esi]
// 00672b01  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00672b07  51                   push ecx
// 00672b08  57                   push edi
// 00672b09  8bce                 mov ecx, esi
// 00672b0b  ffd2                 call edx
// 00672b0d  5f                   pop edi
// 00672b0e  8bc6                 mov eax, esi
// 00672b10  5e                   pop esi
// 00672b11  c20400               ret 4

struct CXTPControlButtonColor {
    void* f(unsigned int);
};

extern "C" void* __fastcall sub_672A80(void*);

void* CXTPControlButtonColor::f(unsigned int arg) {
    void* p = sub_672A80(this);
    void** vt = *(void***)p;
    void (__thiscall *fn)(void*, void*, unsigned int) = (void (__thiscall *)(void*, void*, unsigned int))vt[0x38];
    fn(p, this, arg);
    return p;
}
