// roc 2010-06 00664fa0  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00664fa0
//
// 00664fa0  51                   push ecx
// 00664fa1  56                   push esi
// 00664fa2  c744240400000000     mov dword ptr [esp + 4], 0
// 00664faa  e82160e5ff           call 0x4bafd0
// 00664faf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00664fb3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00664fb7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00664fbb  51                   push ecx
// 00664fbc  52                   push edx
// 00664fbd  56                   push esi
// 00664fbe  8bc8                 mov ecx, eax
// 00664fc0  e83be2ffff           call 0x663200
// 00664fc5  8bc6                 mov eax, esi
// 00664fc7  5e                   pop esi
// 00664fc8  59                   pop ecx
// 00664fc9  c20c00               ret 0xc
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