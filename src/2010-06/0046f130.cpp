// roc 2010-06 0046f130  unit: HH::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046f130
//
// 0046f130  56                   push esi
// 0046f131  8bf1                 mov esi, ecx
// 0046f133  8b4604               mov eax, dword ptr [esi + 4]
// 0046f136  c7063c06a100         mov dword ptr [esi], 0xa1063c
// 0046f13c  85c0                 test eax, eax
// 0046f13e  7409                 je 0x46f149
// 0046f140  50                   push eax
// 0046f141  e8008b3300           call 0x7a7c46
// 0046f146  83c404               add esp, 4
// 0046f149  f644240801           test byte ptr [esp + 8], 1
// 0046f14e  7409                 je 0x46f159
// 0046f150  56                   push esi
// 0046f151  e844883300           call 0x7a799a
// 0046f156  83c404               add esp, 4
// 0046f159  8bc6                 mov eax, esi
// 0046f15b  5e                   pop esi
// 0046f15c  c20400               ret 4
// copied from an identical function in another client (function ??_GS_func_00721190@ns_ROCX000086@@UAEPAXI@Z)

namespace ns_ROCX000086 {
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
