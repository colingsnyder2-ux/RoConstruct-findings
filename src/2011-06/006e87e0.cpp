// roc 2011-06 006e87e0  unit: boost::iostreams::Uoutput::V?$chain::?$filtering_stream_base  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e87e0
//
// 006e87e0  56                   push esi
// 006e87e1  8bf1                 mov esi, ecx
// 006e87e3  e8b8a6ffff           call 0x6e2ea0
// 006e87e8  8b0d6406a400         mov ecx, dword ptr [0xa40664]
// 006e87ee  8d4614               lea eax, [esi + 0x14]
// 006e87f1  8908                 mov dword ptr [eax], ecx
// 006e87f3  8b156006a400         mov edx, dword ptr [0xa40660]
// 006e87f9  50                   push eax
// 006e87fa  8910                 mov dword ptr [eax], edx
// 006e87fc  ff155c06a400         call dword ptr [0xa4065c]
// 006e8802  83c404               add esp, 4
// 006e8805  f644240801           test byte ptr [esp + 8], 1
// 006e880a  7409                 je 0x6e8815
// 006e880c  56                   push esi
// 006e880d  e846181200           call 0x80a058
// 006e8812  83c404               add esp, 4
// 006e8815  8bc6                 mov eax, esi
// 006e8817  5e                   pop esi
// 006e8818  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAEPAU12@H@Z)

namespace ns_ROCX000002 {
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
