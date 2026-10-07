// roc 2012-06 0049e760  unit: HH::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e760
//
// 0049e760  56                   push esi
// 0049e761  8bf1                 mov esi, ecx
// 0049e763  8b4604               mov eax, dword ptr [esi + 4]
// 0049e766  c7068cffb500         mov dword ptr [esi], 0xb5ff8c
// 0049e76c  85c0                 test eax, eax
// 0049e76e  7409                 je 0x49e779
// 0049e770  50                   push eax
// 0049e771  e8443c4e00           call 0x9823ba
// 0049e776  83c404               add esp, 4
// 0049e779  f644240801           test byte ptr [esp + 8], 1
// 0049e77e  7409                 je 0x49e789
// 0049e780  56                   push esi
// 0049e781  e88e394e00           call 0x982114
// 0049e786  83c404               add esp, 4
// 0049e789  8bc6                 mov eax, esi
// 0049e78b  5e                   pop esi
// 0049e78c  c20400               ret 4
// copied from an identical function in another client (function ??_GS_func_00986210@ns_ROCX00005d@@UAEPAXI@Z)

namespace ns_ROCX00005d {
extern "C" void __cdecl G1_func_00986210(void*);
struct S_func_00986210 {
    virtual ~S_func_00986210();
    void* m_p;
};
S_func_00986210::~S_func_00986210()
{
    if (m_p)
        G1_func_00986210(m_p);
}
}
