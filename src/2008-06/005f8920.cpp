// roc 2008-06 005f8920  unit: boost::iostreams::Uoutput::V?$chain::?$filtering_stream_base  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8920
//
// 005f8920  56                   push esi
// 005f8921  8bf1                 mov esi, ecx
// 005f8923  e8a8aeffff           call 0x5f37d0
// 005f8928  8b0d84258000         mov ecx, dword ptr [0x802584]
// 005f892e  8d4614               lea eax, [esi + 0x14]
// 005f8931  8908                 mov dword ptr [eax], ecx
// 005f8933  8b1580258000         mov edx, dword ptr [0x802580]
// 005f8939  50                   push eax
// 005f893a  8910                 mov dword ptr [eax], edx
// 005f893c  ff157c258000         call dword ptr [0x80257c]
// 005f8942  83c404               add esp, 4
// 005f8945  f644240801           test byte ptr [esp + 8], 1
// 005f894a  7409                 je 0x5f8955
// 005f894c  56                   push esi
// 005f894d  e8287d0a00           call 0x6a067a
// 005f8952  83c404               add esp, 4
// 005f8955  8bc6                 mov eax, esi
// 005f8957  5e                   pop esi
// 005f8958  c20400               ret 4
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
