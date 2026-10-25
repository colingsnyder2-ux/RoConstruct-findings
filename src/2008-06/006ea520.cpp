// from server: 100% by tester
// roc 2008-06 006ea520  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea520
//
// 006ea520  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006ea526  8b4058               mov eax, dword ptr [eax + 0x58]
// 006ea529  85c0                 test eax, eax
// 006ea52b  741c                 je 0x6ea549
// 006ea52d  c7804c01000003000000 mov dword ptr [eax + 0x14c], 3
// 006ea537  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006ea53d  8b10                 mov edx, dword ptr [eax]
// 006ea53f  8bc8                 mov ecx, eax
// 006ea541  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006ea547  ffe0                 jmp eax
// 006ea549  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* m_p;
    void SetActivePage();
};

void CXTPCustomizeSheet::SetActivePage()
{
    void* p = *(void**)((char*)m_p + 0x58);
    if (p)
    {
        *(int*)((char*)p + 0x14c) = 3;
        void* q = *(void**)((char*)p + 0x100);
        void** vt = *(void***)q;
        typedef void (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[0x184 / 4];
        fn(q);
    }
}
