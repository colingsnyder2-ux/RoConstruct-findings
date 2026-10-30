// roc 2009-12 0083dce0  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dce0
//
// 0083dce0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083dce6  8b4058               mov eax, dword ptr [eax + 0x58]
// 0083dce9  85c0                 test eax, eax
// 0083dceb  741c                 je 0x83dd09
// 0083dced  c7804c01000001000000 mov dword ptr [eax + 0x14c], 1
// 0083dcf7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0083dcfd  8b10                 mov edx, dword ptr [eax]
// 0083dcff  8bc8                 mov ecx, eax
// 0083dd01  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0083dd07  ffe0                 jmp eax
// 0083dd09  c3                   ret 
// copied from an identical function in another client (function ?SetActivePage1@CXTPCustomizeSheet@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
// from server: 100% by tester
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
        *(int*)((char*)p + 0x14c) = 1;
        void* q = *(void**)((char*)p + 0x100);
        void** vt = *(void***)q;
        typedef void (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[0x184 / 4];
        fn(q);
    }
}
}
