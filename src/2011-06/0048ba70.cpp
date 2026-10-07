// roc 2011-06 0048ba70  unit: HH::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ba70
//
// 0048ba70  56                   push esi
// 0048ba71  8bf1                 mov esi, ecx
// 0048ba73  8b4604               mov eax, dword ptr [esi + 4]
// 0048ba76  c706cc39a700         mov dword ptr [esi], 0xa739cc
// 0048ba7c  85c0                 test eax, eax
// 0048ba7e  7409                 je 0x48ba89
// 0048ba80  50                   push eax
// 0048ba81  e87ee83700           call 0x80a304
// 0048ba86  83c404               add esp, 4
// 0048ba89  f644240801           test byte ptr [esp + 8], 1
// 0048ba8e  7409                 je 0x48ba99
// 0048ba90  56                   push esi
// 0048ba91  e8c2e53700           call 0x80a058
// 0048ba96  83c404               add esp, 4
// 0048ba99  8bc6                 mov eax, esi
// 0048ba9b  5e                   pop esi
// 0048ba9c  c20400               ret 4
// copied from an identical function in another client (function ??_GS_func_0080df70@ns_ROCX00004b@@UAEPAXI@Z)

namespace ns_ROCX00004b {
extern "C" void __cdecl G1_func_0080df70(void*);
struct S_func_0080df70 {
    virtual ~S_func_0080df70();
    void* m_p;
};
S_func_0080df70::~S_func_0080df70()
{
    if (m_p)
        G1_func_0080df70(m_p);
}
}
