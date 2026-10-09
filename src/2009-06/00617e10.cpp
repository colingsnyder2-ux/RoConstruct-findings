// roc 2009-06 00617e10  unit: boost::iostreams::Uoutput::V?$chain::?$filtering_stream_base  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00617e10
//
// 00617e10  56                   push esi
// 00617e11  8bf1                 mov esi, ecx
// 00617e13  e8d8c9ffff           call 0x6147f0
// 00617e18  8b0d40e68900         mov ecx, dword ptr [0x89e640]
// 00617e1e  8d4614               lea eax, [esi + 0x14]
// 00617e21  8908                 mov dword ptr [eax], ecx
// 00617e23  8b153ce68900         mov edx, dword ptr [0x89e63c]
// 00617e29  50                   push eax
// 00617e2a  8910                 mov dword ptr [eax], edx
// 00617e2c  ff1538e68900         call dword ptr [0x89e638]
// 00617e32  83c404               add esp, 4
// 00617e35  f644240801           test byte ptr [esp + 8], 1
// 00617e3a  7409                 je 0x617e45
// 00617e3c  56                   push esi
// 00617e3d  e8f00b1000           call 0x718a32
// 00617e42  83c404               add esp, 4
// 00617e45  8bc6                 mov eax, esi
// 00617e47  5e                   pop esi
// 00617e48  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEPAU12@H@Z)

namespace ns_ROCX000006 {
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
