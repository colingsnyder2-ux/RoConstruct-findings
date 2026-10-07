// roc 2007-08 0045da50  unit: HH::?$CArray  size: 47 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0045da50
//
// 0045da50  56                   push esi
// 0045da51  8bf1                 mov esi, ecx
// 0045da53  8b4604               mov eax, dword ptr [esi + 4]
// 0045da56  85c0                 test eax, eax
// 0045da58  c706c0417900         mov dword ptr [esi], 0x7941c0
// 0045da5e  7409                 je 0x45da69
// 0045da60  50                   push eax
// 0045da61  e8c0241d00           call 0x62ff26
// 0045da66  83c404               add esp, 4
// 0045da69  f644240801           test byte ptr [esp + 8], 1
// 0045da6e  7409                 je 0x45da79
// 0045da70  56                   push esi
// 0045da71  e8ec211d00           call 0x62fc62
// 0045da76  83c404               add esp, 4
// 0045da79  8bc6                 mov eax, esi
// 0045da7b  5e                   pop esi
// 0045da7c  c20400               ret 4
// copied from an identical function in another client (function ??_GS_func_00632350@ns_ROCX000012@@UAEPAXI@Z)

namespace ns_ROCX000012 {
extern "C" void __cdecl G1_func_00632350(void*);
struct S_func_00632350 {
    virtual ~S_func_00632350();
    void* m_p;
};
S_func_00632350::~S_func_00632350()
{
    if (m_p)
        G1_func_00632350(m_p);
}
}
