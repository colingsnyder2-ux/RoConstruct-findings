// from server: 100% by colin
// roc 2007-08 006840b0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006840b0
//
// 006840b0  56                   push esi
// 006840b1  8bf1                 mov esi, ecx
// 006840b3  e882420b00           call 0x73833a
// 006840b8  6a0a                 push 0xa
// 006840ba  8d4e20               lea ecx, [esi + 0x20]
// 006840bd  c706d4f07c00         mov dword ptr [esi], 0x7cf0d4
// 006840c3  e858ffffff           call 0x684020
// 006840c8  33c0                 xor eax, eax
// 006840ca  89463c               mov dword ptr [esi + 0x3c], eax
// 006840cd  894640               mov dword ptr [esi + 0x40], eax
// 006840d0  c7464401000000       mov dword ptr [esi + 0x44], 1
// 006840d7  8bc6                 mov eax, esi
// 006840d9  5e                   pop esi
// 006840da  c3                   ret 

struct CArrayBase {
    void Construct(int n);
};

struct CArrayDerived {
    char pad0[0x20];
    CArrayBase arr;
    char pad1[0x18];
    int m_3c;
    int m_40;
    int m_44;

    CArrayDerived();
};

extern "C" void __stdcall sub_73833a();

CArrayDerived::CArrayDerived()
{
    sub_73833a();
    *(void**)this = (void*)0x7cf0d4;
    arr.Construct(10);
    m_3c = 0;
    m_40 = 0;
    m_44 = 1;
}
