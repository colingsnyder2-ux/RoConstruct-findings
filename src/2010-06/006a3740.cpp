// roc 2010-06 006a3740  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3740
//
// 006a3740  56                   push esi
// 006a3741  8bf1                 mov esi, ecx
// 006a3743  e848f4ffff           call 0x6a2b90
// 006a3748  8b0d4ca69e00         mov ecx, dword ptr [0x9ea64c]
// 006a374e  8d4614               lea eax, [esi + 0x14]
// 006a3751  8908                 mov dword ptr [eax], ecx
// 006a3753  8b1548a69e00         mov edx, dword ptr [0x9ea648]
// 006a3759  50                   push eax
// 006a375a  8910                 mov dword ptr [eax], edx
// 006a375c  ff153ca69e00         call dword ptr [0x9ea63c]
// 006a3762  83c404               add esp, 4
// 006a3765  f644240801           test byte ptr [esp + 8], 1
// 006a376a  7409                 je 0x6a3775
// 006a376c  56                   push esi
// 006a376d  e828421000           call 0x7a799a
// 006a3772  83c404               add esp, 4
// 006a3775  8bc6                 mov eax, esi
// 006a3777  5e                   pop esi
// 006a3778  c20400               ret 4
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
