// from server: 85% by colin
// roc 2007-08 0067f350  unit: CXTPControlSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f350
//
// 0067f350  56                   push esi
// 0067f351  8bf1                 mov esi, ecx
// 0067f353  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067f356  85c9                 test ecx, ecx
// 0067f358  7416                 je 0x67f370
// 0067f35a  8b4608               mov eax, dword ptr [esi + 8]
// 0067f35d  85c0                 test eax, eax
// 0067f35f  740f                 je 0x67f370
// 0067f361  8b11                 mov edx, dword ptr [ecx]
// 0067f363  50                   push eax
// 0067f364  8b4230               mov eax, dword ptr [edx + 0x30]
// 0067f367  ffd0                 call eax
// 0067f369  c7460800000000       mov dword ptr [esi + 8], 0
// 0067f370  5e                   pop esi
// 0067f371  c3                   ret 

struct CXTPControlSelector {
    char pad0[4];
    void* field4;
    void* field8;
    void method();
};

void CXTPControlSelector::method()
{
    if (field4 != 0 && field8 != 0) {
        void** vtbl = *(void***)field4;
        typedef void (__stdcall *Fn)(void*);
        Fn fn = (Fn)vtbl[12];
        fn(field8);
        field8 = 0;
    }
}
