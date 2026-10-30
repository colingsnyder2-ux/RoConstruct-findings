// roc 2010-06 00664ed0  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00664ed0
//
// 00664ed0  51                   push ecx
// 00664ed1  56                   push esi
// 00664ed2  c744240400000000     mov dword ptr [esp + 4], 0
// 00664eda  e8f115e0ff           call 0x4664d0
// 00664edf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00664ee3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00664ee7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00664eeb  51                   push ecx
// 00664eec  52                   push edx
// 00664eed  56                   push esi
// 00664eee  8bc8                 mov ecx, eax
// 00664ef0  e80bdfffff           call 0x662e00
// 00664ef5  8bc6                 mov eax, esi
// 00664ef7  5e                   pop esi
// 00664ef8  59                   pop ecx
// 00664ef9  c20c00               ret 0xc
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