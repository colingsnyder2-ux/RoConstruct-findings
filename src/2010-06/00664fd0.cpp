// roc 2010-06 00664fd0  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00664fd0
//
// 00664fd0  51                   push ecx
// 00664fd1  56                   push esi
// 00664fd2  c744240400000000     mov dword ptr [esp + 4], 0
// 00664fda  e87162e5ff           call 0x4bb250
// 00664fdf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00664fe3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00664fe7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00664feb  51                   push ecx
// 00664fec  52                   push edx
// 00664fed  56                   push esi
// 00664fee  8bc8                 mov ecx, eax
// 00664ff0  e84be3ffff           call 0x663340
// 00664ff5  8bc6                 mov eax, esi
// 00664ff7  5e                   pop esi
// 00664ff8  59                   pop ecx
// 00664ff9  c20c00               ret 0xc
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