// roc 2011-06 006e44d0  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e44d0
//
// 006e44d0  56                   push esi
// 006e44d1  8bf1                 mov esi, ecx
// 006e44d3  e878f4ffff           call 0x6e3950
// 006e44d8  8b0d6406a400         mov ecx, dword ptr [0xa40664]
// 006e44de  8d4614               lea eax, [esi + 0x14]
// 006e44e1  8908                 mov dword ptr [eax], ecx
// 006e44e3  8b156006a400         mov edx, dword ptr [0xa40660]
// 006e44e9  50                   push eax
// 006e44ea  8910                 mov dword ptr [eax], edx
// 006e44ec  ff155c06a400         call dword ptr [0xa4065c]
// 006e44f2  83c404               add esp, 4
// 006e44f5  f644240801           test byte ptr [esp + 8], 1
// 006e44fa  7409                 je 0x6e4505
// 006e44fc  56                   push esi
// 006e44fd  e8565b1200           call 0x80a058
// 006e4502  83c404               add esp, 4
// 006e4505  8bc6                 mov eax, esi
// 006e4507  5e                   pop esi
// 006e4508  c20400               ret 4
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
