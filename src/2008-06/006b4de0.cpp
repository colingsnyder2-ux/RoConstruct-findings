// from server: 100% by tester
// roc 2008-06 006b4de0  unit: CXTPCommandBar  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4de0
//
// 006b4de0  56                   push esi
// 006b4de1  8bf1                 mov esi, ecx
// 006b4de3  8b06                 mov eax, dword ptr [esi]
// 006b4de5  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006b4deb  ffd2                 call edx
// 006b4ded  85c0                 test eax, eax
// 006b4def  7412                 je 0x6b4e03
// 006b4df1  8b10                 mov edx, dword ptr [eax]
// 006b4df3  8bf0                 mov esi, eax
// 006b4df5  8bc8                 mov ecx, eax
// 006b4df7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006b4dfd  ffd0                 call eax
// 006b4dff  85c0                 test eax, eax
// 006b4e01  75ee                 jne 0x6b4df1
// 006b4e03  8bc6                 mov eax, esi
// 006b4e05  5e                   pop esi
// 006b4e06  c3                   ret 

struct CXTPCommandBar {
    void* GetNext();
};

void* CXTPCommandBar::GetNext()
{
    void* p = this;
    void* r = ((void* (__thiscall *)(void*))((*(void***)p)[0x194 / 4]))(p);
    if (r != 0) {
        do {
            p = r;
            r = ((void* (__thiscall *)(void*))((*(void***)p)[0x194 / 4]))(p);
        } while (r != 0);
    }
    return p;
}
