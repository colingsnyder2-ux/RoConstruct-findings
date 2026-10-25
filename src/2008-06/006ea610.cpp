// from server: 100% by tester
// roc 2008-06 006ea610  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea610
//
// 006ea610  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006ea616  8b4058               mov eax, dword ptr [eax + 0x58]
// 006ea619  85c0                 test eax, eax
// 006ea61b  741c                 je 0x6ea639
// 006ea61d  c7809000000000000000 mov dword ptr [eax + 0x90], 0
// 006ea627  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006ea62d  8b10                 mov edx, dword ptr [eax]
// 006ea62f  8bc8                 mov ecx, eax
// 006ea631  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006ea637  ffe0                 jmp eax
// 006ea639  c3                   ret 

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
        *(int*)((char*)p + 0x90) = 0;
        void* q = *(void**)((char*)p + 0x100);
        void** vtbl = *(void***)q;
        typedef void (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[0x184 / 4];
        fn(q);
    }
}
