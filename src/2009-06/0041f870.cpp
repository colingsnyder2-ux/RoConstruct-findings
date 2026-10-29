// roc 2009-06 0041f870  unit: CSelectionTreeCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041f870
//
// 0041f870  51                   push ecx
// 0041f871  56                   push esi
// 0041f872  c744240400000000     mov dword ptr [esp + 4], 0
// 0041f87a  e8b1feffff           call 0x41f730
// 0041f87f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041f883  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041f887  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041f88b  51                   push ecx
// 0041f88c  52                   push edx
// 0041f88d  56                   push esi
// 0041f88e  8bc8                 mov ecx, eax
// 0041f890  e8dbfbffff           call 0x41f470
// 0041f895  8bc6                 mov eax, esi
// 0041f897  5e                   pop esi
// 0041f898  59                   pop ecx
// 0041f899  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAE?AURet@2@PAX0@Z)

namespace ns_ROCX000000 {
struct Ret
{
    Ret(const Ret &);
    ~Ret();
    void *p;
};

struct Impl
{
    Ret g(void *a0, void *a1);
};

struct Getter { static Impl *get(); };

struct S
{
    Ret f(void *a0, void *a1);
};

Ret S::f(void *a0, void *a1)
{
    Impl *impl = Getter::get();
    return impl->g(a0, a1);
}
}
