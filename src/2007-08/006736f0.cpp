// from server: 100% by colin
// roc 2007-08 006736f0  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006736f0
//
// 006736f0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006736f6  8b4058               mov eax, dword ptr [eax + 0x58]
// 006736f9  85c0                 test eax, eax
// 006736fb  741c                 je 0x673719
// 006736fd  c7804801000001000000 mov dword ptr [eax + 0x148], 1
// 00673707  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 0067370d  8b10                 mov edx, dword ptr [eax]
// 0067370f  8bc8                 mov ecx, eax
// 00673711  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 00673717  ffe0                 jmp eax
// 00673719  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* m_p;
    void SetActivePage1();
};

void CXTPCustomizeSheet::SetActivePage1()
{
    void* p = *(void**)((char*)m_p + 0x58);
    if (p)
    {
        *(int*)((char*)p + 0x148) = 1;
        void* q = *(void**)((char*)p + 0xfc);
        void** vt = *(void***)q;
        typedef void (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[0x17c / 4];
        fn(q);
    }
}
