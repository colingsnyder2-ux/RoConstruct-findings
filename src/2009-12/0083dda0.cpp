// roc 2009-12 0083dda0  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dda0
//
// 0083dda0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083dda6  8b4058               mov eax, dword ptr [eax + 0x58]
// 0083dda9  85c0                 test eax, eax
// 0083ddab  741c                 je 0x83ddc9
// 0083ddad  c7809000000000000000 mov dword ptr [eax + 0x90], 0
// 0083ddb7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0083ddbd  8b10                 mov edx, dword ptr [eax]
// 0083ddbf  8bc8                 mov ecx, eax
// 0083ddc1  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0083ddc7  ffe0                 jmp eax
// 0083ddc9  c3                   ret 
// copied from an identical function in another client (function ?Func@CXTPCustomizeSheet@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
// from server: 100% by tester
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* m_pSomething;
    void Func();
};

void CXTPCustomizeSheet::Func()
{
    void* p = *(void**)((char*)m_pSomething + 0x58);
    if (p)
    {
        *(int*)((char*)p + 0x90) = 0;
        void* q = *(void**)((char*)p + 0x100);
        void** vt = *(void***)q;
        typedef void (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[0x184 / 4];
        fn(q);
    }
}
}
