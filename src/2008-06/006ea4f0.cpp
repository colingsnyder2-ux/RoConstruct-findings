// from server: 100% by tester
// roc 2008-06 006ea4f0  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea4f0
//
// 006ea4f0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006ea4f6  8b4058               mov eax, dword ptr [eax + 0x58]
// 006ea4f9  85c0                 test eax, eax
// 006ea4fb  741c                 je 0x6ea519
// 006ea4fd  c7804c01000000000000 mov dword ptr [eax + 0x14c], 0
// 006ea507  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006ea50d  8b10                 mov edx, dword ptr [eax]
// 006ea50f  8bc8                 mov ecx, eax
// 006ea511  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006ea517  ffe0                 jmp eax
// 006ea519  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* m_pSomething;
    void ClearActivePage();
};

void CXTPCustomizeSheet::ClearActivePage()
{
    void* p = *(void**)((char*)m_pSomething + 0x58);
    if (p)
    {
        *(int*)((char*)p + 0x14c) = 0;
        void* q = *(void**)((char*)p + 0x100);
        void** vtbl = *(void***)q;
        typedef void (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[0x184 / 4];
        fn(q);
    }
}
