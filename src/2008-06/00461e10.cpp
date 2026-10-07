// roc 2008-06 00461e10  unit: HH::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461e10
//
// 00461e10  56                   push esi
// 00461e11  8bf1                 mov esi, ecx
// 00461e13  8b4604               mov eax, dword ptr [esi + 4]
// 00461e16  c7065caa8100         mov dword ptr [esi], 0x81aa5c
// 00461e1c  85c0                 test eax, eax
// 00461e1e  7409                 je 0x461e29
// 00461e20  50                   push eax
// 00461e21  e824eb2300           call 0x6a094a
// 00461e26  83c404               add esp, 4
// 00461e29  f644240801           test byte ptr [esp + 8], 1
// 00461e2e  7409                 je 0x461e39
// 00461e30  56                   push esi
// 00461e31  e844e82300           call 0x6a067a
// 00461e36  83c404               add esp, 4
// 00461e39  8bc6                 mov eax, esi
// 00461e3b  5e                   pop esi
// 00461e3c  c20400               ret 4
// copied from an identical function in another client (function ??_GS_func_006a30a0@ns_ROCX000095@@UAEPAXI@Z)

namespace ns_ROCX000095 {
extern "C" void __cdecl G1_func_006a30a0(void*);
struct S_func_006a30a0 {
    virtual ~S_func_006a30a0();
    void* m_p;
};
S_func_006a30a0::~S_func_006a30a0()
{
    if (m_p)
        G1_func_006a30a0(m_p);
}
}
