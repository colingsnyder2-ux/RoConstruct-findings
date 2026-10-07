// roc 2009-06 00462a80  unit: HH::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462a80
//
// 00462a80  56                   push esi
// 00462a81  8bf1                 mov esi, ecx
// 00462a83  8b4604               mov eax, dword ptr [esi + 4]
// 00462a86  c7061cb48b00         mov dword ptr [esi], 0x8bb41c
// 00462a8c  85c0                 test eax, eax
// 00462a8e  7409                 je 0x462a99
// 00462a90  50                   push eax
// 00462a91  e848622b00           call 0x718cde
// 00462a96  83c404               add esp, 4
// 00462a99  f644240801           test byte ptr [esp + 8], 1
// 00462a9e  7409                 je 0x462aa9
// 00462aa0  56                   push esi
// 00462aa1  e88c5f2b00           call 0x718a32
// 00462aa6  83c404               add esp, 4
// 00462aa9  8bc6                 mov eax, esi
// 00462aab  5e                   pop esi
// 00462aac  c20400               ret 4
// copied from an identical function in another client (function ??_GS_func_00721190@ns_ROCX000080@@UAEPAXI@Z)

namespace ns_ROCX000080 {
extern "C" void __cdecl G1_func_00721190(void*);
struct S_func_00721190 {
    virtual ~S_func_00721190();
    void* m_p;
};
S_func_00721190::~S_func_00721190()
{
    if (m_p)
        G1_func_00721190(m_p);
}
}
