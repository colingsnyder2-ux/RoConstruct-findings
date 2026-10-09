// roc 2008-06 005f4cf0  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4cf0
//
// 005f4cf0  56                   push esi
// 005f4cf1  8bf1                 mov esi, ecx
// 005f4cf3  e878f7ffff           call 0x5f4470
// 005f4cf8  8b0d84258000         mov ecx, dword ptr [0x802584]
// 005f4cfe  8d4614               lea eax, [esi + 0x14]
// 005f4d01  8908                 mov dword ptr [eax], ecx
// 005f4d03  8b1580258000         mov edx, dword ptr [0x802580]
// 005f4d09  50                   push eax
// 005f4d0a  8910                 mov dword ptr [eax], edx
// 005f4d0c  ff157c258000         call dword ptr [0x80257c]
// 005f4d12  83c404               add esp, 4
// 005f4d15  f644240801           test byte ptr [esp + 8], 1
// 005f4d1a  7409                 je 0x5f4d25
// 005f4d1c  56                   push esi
// 005f4d1d  e858b90a00           call 0x6a067a
// 005f4d22  83c404               add esp, 4
// 005f4d25  8bc6                 mov eax, esi
// 005f4d27  5e                   pop esi
// 005f4d28  c20400               ret 4
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
