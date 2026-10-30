// roc 2009-12 0083dc80  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dc80
//
// 0083dc80  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083dc86  8b4058               mov eax, dword ptr [eax + 0x58]
// 0083dc89  85c0                 test eax, eax
// 0083dc8b  741c                 je 0x83dca9
// 0083dc8d  c7804c01000000000000 mov dword ptr [eax + 0x14c], 0
// 0083dc97  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0083dc9d  8b10                 mov edx, dword ptr [eax]
// 0083dc9f  8bc8                 mov ecx, eax
// 0083dca1  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0083dca7  ffe0                 jmp eax
// 0083dca9  c3                   ret 
// copied from an identical function in another client (function ?ClearActivePage@CXTPCustomizeSheet@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
// from server: 100% by tester
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
}
