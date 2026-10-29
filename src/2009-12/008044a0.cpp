// roc 2009-12 008044a0  unit: CXTPCommandBar  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008044a0
//
// 008044a0  56                   push esi
// 008044a1  8bf1                 mov esi, ecx
// 008044a3  8b06                 mov eax, dword ptr [esi]
// 008044a5  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008044ab  ffd2                 call edx
// 008044ad  85c0                 test eax, eax
// 008044af  7412                 je 0x8044c3
// 008044b1  8b10                 mov edx, dword ptr [eax]
// 008044b3  8bf0                 mov esi, eax
// 008044b5  8bc8                 mov ecx, eax
// 008044b7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 008044bd  ffd0                 call eax
// 008044bf  85c0                 test eax, eax
// 008044c1  75ee                 jne 0x8044b1
// 008044c3  8bc6                 mov eax, esi
// 008044c5  5e                   pop esi
// 008044c6  c3                   ret 
// copied from an identical function in another client (function ?GetNext@CXTPCommandBar@@QAEPAXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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