// roc 2009-12 0046b630  unit: HH::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b630
//
// 0046b630  56                   push esi
// 0046b631  8bf1                 mov esi, ecx
// 0046b633  8b4604               mov eax, dword ptr [esi + 4]
// 0046b636  c706ccf99a00         mov dword ptr [esi], 0x9af9cc
// 0046b63c  85c0                 test eax, eax
// 0046b63e  7409                 je 0x46b649
// 0046b640  50                   push eax
// 0046b641  e8c0843800           call 0x7f3b06
// 0046b646  83c404               add esp, 4
// 0046b649  f644240801           test byte ptr [esp + 8], 1
// 0046b64e  7409                 je 0x46b659
// 0046b650  56                   push esi
// 0046b651  e804823800           call 0x7f385a
// 0046b656  83c404               add esp, 4
// 0046b659  8bc6                 mov eax, esi
// 0046b65b  5e                   pop esi
// 0046b65c  c20400               ret 4
// copied from an identical function in another client (function ??_GS_func_00721190@ns_ROCX000033@@UAEPAXI@Z)

namespace ns_ROCX000033 {
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
