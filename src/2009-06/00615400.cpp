// roc 2009-06 00615400  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00615400
//
// 00615400  56                   push esi
// 00615401  8bf1                 mov esi, ecx
// 00615403  e818f9ffff           call 0x614d20
// 00615408  8b0d40e68900         mov ecx, dword ptr [0x89e640]
// 0061540e  8d4614               lea eax, [esi + 0x14]
// 00615411  8908                 mov dword ptr [eax], ecx
// 00615413  8b153ce68900         mov edx, dword ptr [0x89e63c]
// 00615419  50                   push eax
// 0061541a  8910                 mov dword ptr [eax], edx
// 0061541c  ff1538e68900         call dword ptr [0x89e638]
// 00615422  83c404               add esp, 4
// 00615425  f644240801           test byte ptr [esp + 8], 1
// 0061542a  7409                 je 0x615435
// 0061542c  56                   push esi
// 0061542d  e800361000           call 0x718a32
// 00615432  83c404               add esp, 4
// 00615435  8bc6                 mov eax, esi
// 00615437  5e                   pop esi
// 00615438  c20400               ret 4
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
