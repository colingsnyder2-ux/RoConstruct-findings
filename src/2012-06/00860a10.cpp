// roc 2012-06 00860a10  unit: boost::iostreams::Uoutput::V?$chain::?$filtering_stream_base  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00860a10
//
// 00860a10  56                   push esi
// 00860a11  8bf1                 mov esi, ecx
// 00860a13  e898a6ffff           call 0x85b0b0
// 00860a18  8b0d9024b200         mov ecx, dword ptr [0xb22490]
// 00860a1e  8d4614               lea eax, [esi + 0x14]
// 00860a21  8908                 mov dword ptr [eax], ecx
// 00860a23  8b159424b200         mov edx, dword ptr [0xb22494]
// 00860a29  50                   push eax
// 00860a2a  8910                 mov dword ptr [eax], edx
// 00860a2c  ff159824b200         call dword ptr [0xb22498]
// 00860a32  83c404               add esp, 4
// 00860a35  f644240801           test byte ptr [esp + 8], 1
// 00860a3a  7409                 je 0x860a45
// 00860a3c  56                   push esi
// 00860a3d  e8d2161200           call 0x982114
// 00860a42  83c404               add esp, 4
// 00860a45  8bc6                 mov eax, esi
// 00860a47  5e                   pop esi
// 00860a48  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEPAU12@H@Z)

namespace ns_ROCX000000 {
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
