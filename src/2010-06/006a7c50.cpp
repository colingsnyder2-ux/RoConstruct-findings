// roc 2010-06 006a7c50  unit: boost::iostreams::Uoutput::V?$chain::?$filtering_stream_base  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a7c50
//
// 006a7c50  56                   push esi
// 006a7c51  8bf1                 mov esi, ecx
// 006a7c53  e858a3ffff           call 0x6a1fb0
// 006a7c58  8b0d4ca69e00         mov ecx, dword ptr [0x9ea64c]
// 006a7c5e  8d4614               lea eax, [esi + 0x14]
// 006a7c61  8908                 mov dword ptr [eax], ecx
// 006a7c63  8b1548a69e00         mov edx, dword ptr [0x9ea648]
// 006a7c69  50                   push eax
// 006a7c6a  8910                 mov dword ptr [eax], edx
// 006a7c6c  ff153ca69e00         call dword ptr [0x9ea63c]
// 006a7c72  83c404               add esp, 4
// 006a7c75  f644240801           test byte ptr [esp + 8], 1
// 006a7c7a  7409                 je 0x6a7c85
// 006a7c7c  56                   push esi
// 006a7c7d  e818fd0f00           call 0x7a799a
// 006a7c82  83c404               add esp, 4
// 006a7c85  8bc6                 mov eax, esi
// 006a7c87  5e                   pop esi
// 006a7c88  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAEPAU12@H@Z)

namespace ns_ROCX000001 {
extern "C" void __cdecl sub_54D430();
extern "C" void __cdecl sub_62FC62(void*);

extern void* g_77E4DC;
extern void* g_77E4E0;
extern void (__cdecl *g_77E4E4)(void*);

struct S {
    S* f(int);
};

S* S::f(int a) {
    sub_54D430();
    void** p = (void**)((char*)this + 0x14);
    *p = g_77E4DC;
    *p = g_77E4E0;
    g_77E4E4(p);
    if (a & 1) {
        sub_62FC62(this);
    }
    return this;
}
}
