// roc 2012-06 0085c6a0  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085c6a0
//
// 0085c6a0  56                   push esi
// 0085c6a1  8bf1                 mov esi, ecx
// 0085c6a3  e808f5ffff           call 0x85bbb0
// 0085c6a8  8b0d9024b200         mov ecx, dword ptr [0xb22490]
// 0085c6ae  8d4614               lea eax, [esi + 0x14]
// 0085c6b1  8908                 mov dword ptr [eax], ecx
// 0085c6b3  8b159424b200         mov edx, dword ptr [0xb22494]
// 0085c6b9  50                   push eax
// 0085c6ba  8910                 mov dword ptr [eax], edx
// 0085c6bc  ff159824b200         call dword ptr [0xb22498]
// 0085c6c2  83c404               add esp, 4
// 0085c6c5  f644240801           test byte ptr [esp + 8], 1
// 0085c6ca  7409                 je 0x85c6d5
// 0085c6cc  56                   push esi
// 0085c6cd  e8425a1200           call 0x982114
// 0085c6d2  83c404               add esp, 4
// 0085c6d5  8bc6                 mov eax, esi
// 0085c6d7  5e                   pop esi
// 0085c6d8  c20400               ret 4
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
